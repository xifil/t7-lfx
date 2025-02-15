#pragma once

namespace demonware {
	class bdPublisherVariables final : public service {
	public:
		bdPublisherVariables();

	private:
		void retrieve_publisher_variables(service_server* server, byte_buffer* buffer) const;
	};
}
