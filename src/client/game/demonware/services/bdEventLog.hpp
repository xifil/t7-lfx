#pragma once

namespace demonware {
	class bdEventLog final : public service {
	public:
		bdEventLog();

	private:
		void record_event(service_server* server, byte_buffer* buffer) const;
		void record_event_bin(service_server* server, byte_buffer* buffer) const;
		void record_events(service_server* server, byte_buffer* buffer) const;
		void record_events_bin(service_server* server, byte_buffer* buffer) const;
		void initialize_filtering(service_server* server, byte_buffer* buffer) const;
	};
}
