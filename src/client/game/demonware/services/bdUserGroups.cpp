#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdUserGroups::bdUserGroups()
		: service(65, "bdUserGroups")
	{
		this->register_task(1, &bdUserGroups::create_group);
		this->register_task(2, &bdUserGroups::delete_group);
		this->register_task(3, &bdUserGroups::join_group);
		this->register_task(4, &bdUserGroups::leave_group);
		this->register_task(5, &bdUserGroups::get_membership_info);
		this->register_task(6, &bdUserGroups::change_member_type);
		this->register_task(7, &bdUserGroups::get_num_members);
		this->register_task(8, &bdUserGroups::get_members);
		this->register_task(9, &bdUserGroups::get_memberships);
		this->register_task(10, &bdUserGroups::read_stats_by_rank);
		this->register_task(11, &bdUserGroups::get_group_lists);
	}

	void bdUserGroups::create_group(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::delete_group(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::join_group(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::leave_group(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::get_membership_info(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::change_member_type(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::get_num_members(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::get_members(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::get_memberships(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::read_stats_by_rank(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdUserGroups::get_group_lists(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
