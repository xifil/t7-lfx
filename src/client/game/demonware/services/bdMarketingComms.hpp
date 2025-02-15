#pragma once

namespace demonware {
	class bdMarketingComms final : public service {
	public:
		bdMarketingComms();

	private:
		void get_messages(service_server* server, byte_buffer* buffer) const;
		void report_full_messages_viewed(service_server* server, byte_buffer* buffer) const;
	};
}
