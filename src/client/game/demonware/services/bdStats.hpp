#pragma once

namespace demonware {
	class bdStats final : public service {
	public:
		bdStats();

	private:
		void write_stats(service_server* server, byte_buffer* buffer) const;
		void delete_stats(service_server* server, byte_buffer* buffer) const;
		void unk3(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_rank(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_pivot(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_rating(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_multiple_ranks(service_server* server, byte_buffer* buffer) const;
		void read_external_title_stats(service_server* server, byte_buffer* buffer) const;
		void read_external_title_named_stats(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_leaderboard_ids_and_entity_ids(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_multiple_ratings(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_entity_id(service_server* server, byte_buffer* buffer) const;
		void write_server_validated_stats(service_server* server, byte_buffer* buffer) const;
	};
}
