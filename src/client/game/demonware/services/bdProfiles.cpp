#include <std_include.hpp>
#include "../services.hpp"

#include "../../../component/profile_infos.hpp"

namespace demonware {
	bdProfiles::bdProfiles()
		: service(8, "bdProfiles")
	{
		this->register_task(1, &bdProfiles::get_public_infos);
		this->register_task(2, &bdProfiles::get_private_info);
		this->register_task(3, &bdProfiles::set_public_info);
		this->register_task(4, &bdProfiles::set_private_info);
		this->register_task(5, &bdProfiles::delete_profile);
		this->register_task(6, &bdProfiles::set_private_info_by_user_id);
		this->register_task(7, &bdProfiles::get_private_info_by_user_id);
		this->register_task(8, &bdProfiles::set_public_info_by_user_id);
	}

	void bdProfiles::get_public_infos(service_server* server, byte_buffer* buffer) const {
		std::vector<std::pair<uint64_t, profile_infos::profile_info>> profile_infos{};

		uint64_t entity_id;
		while (buffer->read_uint64(&entity_id)) {
			auto profile = profile_infos::get_profile_info(entity_id);
			if (profile) {
				profile_infos.emplace_back(entity_id, std::move(*profile));
			}
		}

		auto reply = server->create_reply(this->task_id(), profile_infos.empty() ? game::BD_NO_PROFILE_INFO_EXISTS : game::BD_NO_ERROR);

		for (auto& info : profile_infos) {
			auto result = std::make_unique<bdPublicProfileInfo>();
			result->m_entityID = info.first;
			result->m_VERSION = info.second.version;
			result->m_ddl = std::move(info.second.ddl);

			reply.add(result);
		}

		reply.send();
	}

	void bdProfiles::set_public_info(service_server* server, byte_buffer* buffer) const {
		profile_infos::profile_info info{};

		buffer->read_int32(&info.version);
		buffer->read_blob(&info.ddl);

		profile_infos::update_profile_info(info);

		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdProfiles::get_private_info(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdProfiles::set_private_info(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdProfiles::delete_profile(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdProfiles::set_private_info_by_user_id(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdProfiles::get_private_info_by_user_id(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdProfiles::set_public_info_by_user_id(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
