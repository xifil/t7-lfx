#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdAnticheat::bdAnticheat()
		: service(38, "bdAnticheat")
	{
		this->register_task(2, &bdAnticheat::answer_challenges);
		this->register_task(3, &bdAnticheat::report_console_id);
		this->register_task(4, &bdAnticheat::report_console_details);
		this->register_task(5, &bdAnticheat::answer_totp_challenge);
		this->register_task(6, &bdAnticheat::unk6);
	}

	void bdAnticheat::answer_challenges(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO: Read data as soon as needed
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdAnticheat::report_console_id(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO: Read data as soon as needed
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
	
	void bdAnticheat::report_console_details(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO: Read data as soon as needed
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdAnticheat::answer_totp_challenge(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO: Read data as soon as needed
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdAnticheat::unk6(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO: Read data as soon as needed
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
