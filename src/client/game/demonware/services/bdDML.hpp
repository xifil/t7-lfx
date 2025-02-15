#pragma once

namespace demonware {
	class bdDML final : public service {
	public:
		bdDML();

	private:
		void record_ip(service_server* server, byte_buffer* buffer) const;
		void get_user_data(service_server* server, byte_buffer* buffer) const;
		void get_user_hierarchical_data(service_server* server, byte_buffer* buffer) const;
		void get_users_last_logon_data(service_server* server, byte_buffer* buffer) const;
	};
}
