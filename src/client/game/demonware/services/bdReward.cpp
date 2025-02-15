#include <std_include.hpp>
#include "../services.hpp"

namespace demonware {
	bdReward::bdReward()
		: service(139, "bdReward")
	{
		this->register_task(1, &bdReward::increment_time);
		this->register_task(2, &bdReward::claim_reward_roll);
		this->register_task(3, &bdReward::claim_client_achievements);
		this->register_task(4, &bdReward::report_reward_events);
	}

	void bdReward::increment_time(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdReward::claim_reward_roll(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdReward::claim_client_achievements(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdReward::report_reward_events(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
