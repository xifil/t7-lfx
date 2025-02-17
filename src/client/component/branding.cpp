#include <std_include.hpp>
#include "loader/component_loader.hpp"
#include "game/game.hpp"
#include "version.hpp"

#include "branding.hpp"
#include "command.hpp"
#include "scheduler.hpp"

#include <utils/concurrency.hpp>
#include <utils/flags.hpp>
#include <utils/hook.hpp>
#include <utils/properties.hpp>
#include <utils/string.hpp>

namespace branding {
	namespace {
		utils::concurrency::container<std::string> client_display_name{};

		void store_client_display_name(const std::string& name) {
			utils::properties::store("clientDisplayName", name);
		}

		void activate_client_display_name(std::string new_name) {
			client_display_name.access([&](std::string& name) {
				name = std::move(new_name);
			});
		}

		void update_client_display_name(const std::string& new_name) {
			activate_client_display_name(new_name);
			store_client_display_name(new_name);
		}

		void setup_client_display_name() {
			update_client_display_name("t7-lfx");
		}

		void load_client_display_name() {
			const auto stored_name = utils::properties::load("clientDisplayName");

			if (stored_name) {
				activate_client_display_name(*stored_name);
			}
			else {
				setup_client_display_name();
			}
		}

		void draw_branding() {
			constexpr auto x = 4;
			constexpr auto y = 0;
			constexpr auto scale = 0.45f;
			float color[4] = { 0.666f, 0.666f, 0.666f, 0.666f };

			const auto* font = reinterpret_cast<uint32_t*(*)()>(0x141CAC8E0_g)();
			if (!font) {
				return;
			}

			static bool no_ext = utils::flags::has_flag("noext");

			const char* text = utils::string::va("%s: " VERSION "%s", get_client_display_name(),
				no_ext ? "\n^3Warning: ext.dll is not loaded" : "");
			game::R_AddCmdDrawText(text, std::numeric_limits<int>::max(), font,
				static_cast<float>(x), y + static_cast<float>(font[2]) * scale,
				scale, scale, 0.0f, color, game::ITEM_TEXTSTYLE_NORMAL);
		}

		const char* get_ingame_console_prefix_stub() {
			return utils::string::va("%s> ", get_client_display_name());
		}
	}

	const char* get_client_display_name() {
		const auto name = client_display_name.copy();
		return utils::string::va("%.*s", static_cast<int>(name.size()), name.data());
	}

	struct component final : client_component {
		void post_load() override {
			load_client_display_name();
		}

		void post_unpack() override {
			scheduler::loop(draw_branding, scheduler::renderer);

			// Change window title prefix
			utils::hook::copy_string(0x14303F3D8_g, "t7-lfx");

			// Change ingame console prefix
			utils::hook::call(0x141339970_g, get_ingame_console_prefix_stub);

			command::add("client_display_name", [](const command::params& params) {
				if (params.size() != 2) {
					return;
				}

				update_client_display_name(params[1]);
			});
		}
	};
}

REGISTER_COMPONENT(branding::component)
