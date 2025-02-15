#include <std_include.hpp>
#include "loader/component_loader.hpp"

#include <utils/hook.hpp>
#include <utils/nt.hpp>
#include <game/game.hpp>

namespace extension {
	namespace {
		void message_box_stub(HWND window, LPCSTR text, LPCSTR caption, UINT type) {
			std::thread th {
				[=]() {
					MessageBoxA(window, std::format("{} - incorrect.", text).c_str(), caption, type);
				}
			};
			th.detach();
		}
	}

	struct component final : generic_component {
		component() {
			this->extension_ = utils::nt::library::load(game::get_appdata_path() / "ext.dll");
			utils::hook::set(this->extension_.get_iat_entry("user32.dll", "MessageBoxA"), message_box_stub);
		}

		~component() override {
			this->extension_.free();
		}

		void post_load() override {
			this->extension_.invoke<void>("_1");
		}

		void post_unpack() override {
			this->extension_.invoke<void>("_2");
		}

		void pre_destroy() override {
			this->extension_.invoke<void>("_3");
		}

		utils::nt::library extension_{};
	};
}

REGISTER_COMPONENT(extension::component)
