#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdFacebook::bdFacebook()
		: service(36, "bdFacebook")
	{
		this->register_task(1, &bdFacebook::register_account);
		this->register_task(2, &bdFacebook::post);
		this->register_task(3, &bdFacebook::unregister_account);
		this->register_task(5, &bdFacebook::is_registered);
		this->register_task(6, &bdFacebook::get_info);
		this->register_task(7, &bdFacebook::get_registered_accounts);
		this->register_task(8, &bdFacebook::get_friends);
		this->register_task(9, &bdFacebook::get_profile_pictures);
		this->register_task(10, &bdFacebook::upload_photo);
		this->register_task(11, &bdFacebook::register_token);
		this->register_task(12, &bdFacebook::upload_video);
		this->register_task(13, &bdFacebook::get_friends_by_id);
		this->register_task(14, &bdFacebook::set_like_status);
	}

	void bdFacebook::register_account(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::post(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::unregister_account(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::is_registered(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::get_info(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::get_registered_accounts(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::get_friends(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::get_profile_pictures(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::upload_photo(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::register_token(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::upload_video(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::get_friends_by_id(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdFacebook::set_like_status(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
