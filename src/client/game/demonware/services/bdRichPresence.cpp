#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdRichPresence::bdRichPresence()
		: service(68, "bdRichPresence")
	{
		this->register_task(1, &bdRichPresence::set_info);
		this->register_task(2, &bdRichPresence::get_info);
	}

	void bdRichPresence::set_info(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdRichPresence::get_info(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
