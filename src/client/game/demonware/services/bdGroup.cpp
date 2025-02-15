#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdGroup::bdGroup()
		: service(28, "bdGroup")
	{
		this->register_task(1, &bdGroup::set_groups);
		this->register_task(2, &bdGroup::set_groups_for_entity);
		this->register_task(3, &bdGroup::get_entity_groups);
		this->register_task(4, &bdGroup::get_group_counts);
	}

	void bdGroup::set_groups(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdGroup::set_groups_for_entity(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdGroup::get_entity_groups(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdGroup::get_group_counts(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
