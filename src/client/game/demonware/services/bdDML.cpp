#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdDML::bdDML()
		: service(27, "bdDML")
	{
		this->register_task(1, &bdDML::record_ip);
		this->register_task(2, &bdDML::get_user_data);
		this->register_task(3, &bdDML::get_user_hierarchical_data);
		this->register_task(4, &bdDML::get_users_last_logon_data);
	}

	void bdDML::record_ip(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdDML::get_user_data(service_server* server, byte_buffer* /*buffer*/) const {
		auto result = std::make_unique<bdDMLRawData>();
		result->country_code = "US";
		result->country_code = "'Murica";
		result->region = "New York";
		result->city = "New York";
		result->latitude = 0;
		result->longitude = 0;

		result->asn = 0x2119;
		result->timezone = "+01:00";

		auto reply = server->create_reply(this->task_id());
		reply.add(result);
		reply.send();
	}

	void bdDML::get_user_hierarchical_data(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdDML::get_users_last_logon_data(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
