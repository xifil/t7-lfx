#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdStats2::bdStats2()
		: service(19, "bdStats")
	{
		this->register_task(1, &bdStats2::start_arbitrated_session);
		this->register_task(2, &bdStats2::write_arbitrated_stats);
	}

	void bdStats2::start_arbitrated_session(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdStats2::write_arbitrated_stats(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
