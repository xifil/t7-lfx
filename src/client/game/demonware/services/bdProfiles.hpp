#pragma once

namespace demonware {
	class bdProfiles final : public service {
	public:
		bdProfiles();

	private:
		void get_public_infos(service_server* server, byte_buffer* buffer) const;
		void get_private_info(service_server* server, byte_buffer* buffer) const;
		void set_public_info(service_server* server, byte_buffer* buffer) const;
		void set_private_info(service_server* server, byte_buffer* buffer) const;
		void delete_profile(service_server* server, byte_buffer* buffer) const;
		void set_private_info_by_user_id(service_server* server, byte_buffer* buffer) const;
		void get_private_info_by_user_id(service_server* server, byte_buffer* buffer) const;
		void set_public_info_by_user_id(service_server* server, byte_buffer* buffer) const;
	};
}
