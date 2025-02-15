#pragma once

namespace demonware {
	class bdStats2 final : public service {
	public:
		bdStats2();

	private:
		void start_arbitrated_session(service_server* server, byte_buffer* buffer) const;
		void write_arbitrated_stats(service_server* server, byte_buffer* buffer) const;
	};
}
