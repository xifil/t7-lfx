#pragma once

namespace demonware {
	class bdFacebook final : public service {
	public:
		bdFacebook();

	private:
		void register_account(service_server* server, byte_buffer* buffer) const;
		void post(service_server* server, byte_buffer* buffer) const;
		void unregister_account(service_server* server, byte_buffer* buffer) const;
		void is_registered(service_server* server, byte_buffer* buffer) const;
		void get_info(service_server* server, byte_buffer* buffer) const;
		void get_registered_accounts(service_server* server, byte_buffer* buffer) const;
		void get_friends(service_server* server, byte_buffer* buffer) const;
		void get_profile_pictures(service_server* server, byte_buffer* buffer) const;
		void upload_photo(service_server* server, byte_buffer* buffer) const;
		void register_token(service_server* server, byte_buffer* buffer) const;
		void upload_video(service_server* server, byte_buffer* buffer) const;
		void get_friends_by_id(service_server* server, byte_buffer* buffer) const;
		void set_like_status(service_server* server, byte_buffer* buffer) const;
	};
}
