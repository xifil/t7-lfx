#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdEventLog::bdEventLog()
		: service(67, "bdEventLog")
	{
		this->register_task(1, &bdEventLog::record_event);
		this->register_task(2, &bdEventLog::record_event_bin);
		this->register_task(3, &bdEventLog::record_events);
		this->register_task(4, &bdEventLog::record_events_bin);
		this->register_task(6, &bdEventLog::initialize_filtering);
	}

	void bdEventLog::record_event(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdEventLog::record_event_bin(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdEventLog::record_events(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdEventLog::record_events_bin(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdEventLog::initialize_filtering(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
