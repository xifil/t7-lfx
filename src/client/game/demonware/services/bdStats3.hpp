#pragma once

namespace demonware {
	class bdStats3 final : public service {
	public:
		bdStats3();

	private:
		void delete_cs_file_stats(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_entity_id(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_rank(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_pivot(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_rating(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_multiple_ranks(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_leaderboard_ids_and_entity_ids(service_server* server, byte_buffer* buffer) const;
	};
}
