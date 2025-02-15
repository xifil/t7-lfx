#pragma once

namespace demonware {
	class bdLeague2 final : public service {
	public:
		bdLeague2();

	private:
		void write_stats(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_team_id(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_rank(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_pivot(service_server* server, byte_buffer* buffer) const;
	};
}
