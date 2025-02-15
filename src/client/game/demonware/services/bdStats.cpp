#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdStats::bdStats()
		: service(4, "bdStats")
	{
		this->register_task(1, &bdStats::write_stats);
		this->register_task(2, &bdStats::delete_stats);
		this->register_task(3, &bdStats::unk3); // leaderboards
		this->register_task(4, &bdStats::read_stats_by_rank);
		this->register_task(5, &bdStats::read_stats_by_pivot);
		this->register_task(6, &bdStats::read_stats_by_rating);
		this->register_task(7, &bdStats::read_stats_by_multiple_ranks);
		this->register_task(8, &bdStats::read_external_title_stats);
		this->register_task(10, &bdStats::read_external_title_named_stats);
		this->register_task(11, &bdStats::read_stats_by_leaderboard_ids_and_entity_ids);
		this->register_task(12, &bdStats::read_stats_by_multiple_ratings);
		this->register_task(13, &bdStats::read_stats_by_entity_id);
		this->register_task(14, &bdStats::write_server_validated_stats);
	}

	void bdStats::write_stats(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::delete_stats(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::unk3(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::read_stats_by_rank(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::read_stats_by_pivot(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::read_stats_by_rating(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::read_stats_by_multiple_ranks(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::read_external_title_stats(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::read_external_title_named_stats(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::read_stats_by_leaderboard_ids_and_entity_ids(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::read_stats_by_multiple_ratings(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::read_stats_by_entity_id(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats::write_server_validated_stats(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
