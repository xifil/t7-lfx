#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdPublisherVariables::bdPublisherVariables()
		: service(95, "bdPublisherVariables")
	{
		this->register_task(1, &bdPublisherVariables::retrieve_publisher_variables);
	}

	void bdPublisherVariables::retrieve_publisher_variables(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
