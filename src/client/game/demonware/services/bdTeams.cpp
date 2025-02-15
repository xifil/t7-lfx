#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdTeams::bdTeams()
		: service(3, "bdTeams")
	{
		this->register_task(30, &bdTeams::create_team);
		this->register_task(31, &bdTeams::update_team_name);
		this->register_task(32, &bdTeams::promote_member);
		this->register_task(33, &bdTeams::kick_member);
		this->register_task(34, &bdTeams::leave_team);
		this->register_task(35, &bdTeams::propose_membership);
		this->register_task(36, &bdTeams::reject_membership);
		this->register_task(37, &bdTeams::accept_membership);
		this->register_task(38, &bdTeams::get_public_profiles);
		this->register_task(39, &bdTeams::get_private_profile);
		this->register_task(40, &bdTeams::get_public_member_profiles);
		this->register_task(41, &bdTeams::get_private_member_profiles);
		this->register_task(42, &bdTeams::set_public_profile);
		this->register_task(43, &bdTeams::set_private_profile);
		this->register_task(44, &bdTeams::set_public_member_profile);
		this->register_task(45, &bdTeams::set_private_member_profile);
		this->register_task(46, &bdTeams::get_memberships);
		this->register_task(47, &bdTeams::get_members);
		this->register_task(48, &bdTeams::get_outgoing_proposals);
		this->register_task(49, &bdTeams::withdraw_proposal);
		this->register_task(50, &bdTeams::demote_member);
		this->register_task(51, &bdTeams::promote_member_to_owner);
		this->register_task(52, &bdTeams::get_team_info);
		this->register_task(53, &bdTeams::get_incoming_proposals);
		this->register_task(54, &bdTeams::send_instant_message);
		this->register_task(56, &bdTeams::get_memberships_user);
		this->register_task(57, &bdTeams::send_instant_message_to_team);
		this->register_task(58, &bdTeams::search_public_team_profiles);
		this->register_task(63, &bdTeams::add_application);
		this->register_task(64, &bdTeams::get_applications_by_team);
		this->register_task(65, &bdTeams::accept_application);
		this->register_task(66, &bdTeams::reject_application);
		this->register_task(68, &bdTeams::auto_join_team);
		this->register_task(70, &bdTeams::create_team_with_profiles);
		this->register_task(73, &bdTeams::ban_member);
		this->register_task(74, &bdTeams::unban_member);
		this->register_task(76, &bdTeams::block_application);
		this->register_task(78, &bdTeams::unblock_application);
		this->register_task(80, &bdTeams::update_team_type);
		this->register_task(82, &bdTeams::set_online);
		this->register_task(83, &bdTeams::get_memberships_with_counts);
		this->register_task(84, &bdTeams::get_memberships_with_counts_user);
		this->register_task(85, &bdTeams::search_teams);
		this->register_task(86, &bdTeams::create_team_with_profiles_and_team_type);
		this->register_task(87, &bdTeams::get_memberships_with_counts_and_team_type_user);
		this->register_task(88, &bdTeams::get_memberships_with_counts_and_team_type);
		this->register_task(89, &bdTeams::get_team_info_with_team_type);
		this->register_task(91, &bdTeams::set_team_auto_join);
		this->register_task(92, &bdTeams::get_team_auto_join);
		this->register_task(94, &bdTeams::get_members_and_privileges);
	}

	void bdTeams::create_team(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::update_team_name(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::promote_member(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::kick_member(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::leave_team(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::propose_membership(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::reject_membership(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::accept_membership(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_public_profiles(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_private_profile(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_public_member_profiles(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_private_member_profiles(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::set_public_profile(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::set_private_profile(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::set_public_member_profile(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::set_private_member_profile(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_memberships(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_members(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_outgoing_proposals(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::withdraw_proposal(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::demote_member(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::promote_member_to_owner(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_team_info(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_incoming_proposals(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::send_instant_message(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_memberships_user(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::send_instant_message_to_team(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::search_public_team_profiles(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::add_application(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_applications_by_team(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::accept_application(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::reject_application(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::auto_join_team(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::create_team_with_profiles(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::ban_member(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::unban_member(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::block_application(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::unblock_application(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::update_team_type(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::set_online(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_memberships_with_counts(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_memberships_with_counts_user(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::search_teams(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::create_team_with_profiles_and_team_type(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_memberships_with_counts_and_team_type_user(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_memberships_with_counts_and_team_type(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_team_info_with_team_type(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::set_team_auto_join(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_team_auto_join(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdTeams::get_members_and_privileges(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
