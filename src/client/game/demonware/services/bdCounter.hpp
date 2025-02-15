#pragma once

namespace demonware {
	class bdCounter final : public service {
	public:
		bdCounter();

	private:
		void increment_counters(service_server* server, byte_buffer* buffer) const;
		void get_counter_totals(service_server* server, byte_buffer* buffer) const;
	};
}
