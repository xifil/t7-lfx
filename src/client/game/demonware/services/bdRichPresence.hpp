#pragma once

namespace demonware {
	class bdRichPresence final : public service {
	public:
		bdRichPresence();

	private:
		void set_info(service_server* server, byte_buffer* buffer) const;
		void get_info(service_server* server, byte_buffer* buffer) const;
	};
}
