#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdCounter::bdCounter()
		: service(23, "bdCounter")
	{
		this->register_task(1, &bdCounter::increment_counters);
		this->register_task(2, &bdCounter::get_counter_totals);
	}

	void bdCounter::increment_counters(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdCounter::get_counter_totals(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
