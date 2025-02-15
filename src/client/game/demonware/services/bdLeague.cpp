#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdLeague::bdLeague()
		: service(81, "bdLeague")
	{
		this->register_task(1, &bdLeague::get_team_id);
		this->register_task(2, &bdLeague::get_team_ids_for_user);
		this->register_task(3, &bdLeague::get_team_subdivisions);
		this->register_task(4, &bdLeague::set_team_name);
		this->register_task(5, &bdLeague::set_team_icon);
		this->register_task(6, &bdLeague::get_team_infos);
		this->register_task(7, &bdLeague::get_team_leagues_and_subdivisions);
		this->register_task(8, &bdLeague::get_team_member_infos);
		this->register_task(10, &bdLeague::increment_games_played_count);
		this->register_task(20, &bdLeague::get_subdivision_infos);
		this->register_task(21, &bdLeague::get_team_subdivision_history);
	}

	void bdLeague::get_team_id(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::get_team_ids_for_user(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::get_team_subdivisions(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::set_team_name(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::set_team_icon(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::get_team_infos(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::get_team_leagues_and_subdivisions(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::get_team_member_infos(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::increment_games_played_count(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::get_subdivision_infos(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdLeague::get_team_subdivision_history(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
