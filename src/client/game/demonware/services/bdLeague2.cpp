#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdLeague2::bdLeague2()
		: service(82, "bdLeague")
	{
		this->register_task(1, &bdLeague2::write_stats);
		this->register_task(2, &bdLeague2::read_stats_by_team_id);
		this->register_task(3, &bdLeague2::read_stats_by_rank);
		this->register_task(4, &bdLeague2::read_stats_by_pivot);
	}

	void bdLeague2::write_stats(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague2::read_stats_by_team_id(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague2::read_stats_by_rank(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague2::read_stats_by_pivot(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
