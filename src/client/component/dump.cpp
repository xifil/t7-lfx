#include <std_include.hpp>
#include "loader/component_loader.hpp"

#include "command.hpp"

#include <utils/nt.hpp>
#include <utils/string.hpp>
#include <utils/properties.hpp>
#include <utils/concurrency.hpp>

#include <scylla/pe_parser.hpp>
#include <scylla/process_access_help.hpp>

namespace dump {
	namespace {
		std::string append_dump_to_filename(const std::string& filename) {
			std::filesystem::path path_obj(filename);
			return path_obj.stem().string() + "_dump" + path_obj.extension().string();
		}
	}

	struct component final : client_component {
		void post_unpack() override {
			command::add("dump", [](const command::params& params) {
				std::string target_module = utils::nt::library().get_name();
				if (params.size() == 2) {
					target_module = params[1];
				}

				utils::nt::library target_library{ target_module };
				if (!target_library) {
					MessageBoxA(nullptr, utils::string::va("Couldn't find module %s, cancelling dump.", target_module.c_str()), "t7-lfx", MB_OK | MB_ICONERROR);
					return;
				}

				std::uintptr_t mod_base = reinterpret_cast<std::uintptr_t>(target_library.get_ptr());
				std::uintptr_t mod_entry_point = reinterpret_cast<std::uintptr_t>(target_library.get_entry_point());
				std::filesystem::path mod_dump_path = utils::nt::library().get_folder() / append_dump_to_filename(target_module);

				scylla::process_access_help::open_process_handle(GetCurrentProcessId());
				scylla::pe_parser parser{ mod_base, true };
				if (parser.is_valid_pe_file()) {
					if (parser.dump_process(mod_base, mod_entry_point, mod_dump_path.wstring().c_str())) {
						MessageBoxA(nullptr, utils::string::va("Dump success: %s", mod_dump_path.string().c_str()), "t7-lfx", MB_OK | MB_ICONINFORMATION);
					}
					else {
						MessageBoxA(nullptr, "Failed to dump.", "t7-lfx", MB_OK | MB_ICONERROR);
					}
				}
				else {
					MessageBoxA(nullptr, "PE File was invalid.", "t7-lfx", MB_OK | MB_ICONERROR);
				}
			});
		}
	};
}

REGISTER_COMPONENT(dump::component)
