#pragma once

namespace demonware {
	class bdAnticheat final : public service {
	public:
		bdAnticheat();

	private:
		void answer_challenges(service_server* server, byte_buffer* buffer) const;
		void report_console_id(service_server* server, byte_buffer* buffer) const;
		void report_console_details(service_server* server, byte_buffer* buffer) const;
		void answer_totp_challenge(service_server* server, byte_buffer* buffer) const;
		void unk6(service_server* server, byte_buffer* buffer) const;
	};
}
