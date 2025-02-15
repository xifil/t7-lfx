#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdStats3::bdStats3()
		: service(91, "bdStats")
	{
		this->register_task(1, &bdStats3::delete_cs_file_stats);
		this->register_task(3, &bdStats3::read_stats_by_entity_id);
		this->register_task(4, &bdStats3::read_stats_by_rank);
		this->register_task(5, &bdStats3::read_stats_by_pivot);
		this->register_task(6, &bdStats3::read_stats_by_rating);
		this->register_task(7, &bdStats3::read_stats_by_multiple_ranks);
		this->register_task(11, &bdStats3::read_stats_by_leaderboard_ids_and_entity_ids);
	}

	void bdStats3::delete_cs_file_stats(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats3::read_stats_by_entity_id(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats3::read_stats_by_rank(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats3::read_stats_by_pivot(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats3::read_stats_by_rating(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats3::read_stats_by_multiple_ranks(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats3::read_stats_by_leaderboard_ids_and_entity_ids(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
