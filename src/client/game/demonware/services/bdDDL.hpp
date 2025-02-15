#pragma once

namespace demonware {
	class bdDDL final : public service {
	public:
		bdDDL();

	private:
		void verify_ddl_files(service_server* server, byte_buffer* buffer) const;
	};
}
