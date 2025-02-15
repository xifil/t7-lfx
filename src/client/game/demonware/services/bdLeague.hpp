#pragma once

namespace demonware {
	class bdLeague final : public service {
	public:
		bdLeague();

	private:
		void get_team_id(service_server* server, byte_buffer* buffer) const;
		void get_team_ids_for_user(service_server* server, byte_buffer* buffer) const;
		void get_team_subdivisions(service_server* server, byte_buffer* buffer) const;
		void set_team_name(service_server* server, byte_buffer* buffer) const;
		void set_team_icon(service_server* server, byte_buffer* buffer) const;
		void get_team_infos(service_server* server, byte_buffer* buffer) const;
		void get_team_leagues_and_subdivisions(service_server* server, byte_buffer* buffer) const;
		void get_team_member_infos(service_server* server, byte_buffer* buffer) const;
		void increment_games_played_count(service_server* server, byte_buffer* buffer) const;
		void get_subdivision_infos(service_server* server, byte_buffer* buffer) const;
		void get_team_subdivision_history(service_server* server, byte_buffer* buffer) const;
	};
}
