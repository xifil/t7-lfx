#pragma once

namespace demonware {
	class bdGroup final : public service {
	public:
		bdGroup();

	private:
		void set_groups(service_server* server, byte_buffer* buffer) const;
		void set_groups_for_entity(service_server* server, byte_buffer* buffer) const;
		void get_entity_groups(service_server* server, byte_buffer* buffer) const;
		void get_group_counts(service_server* server, byte_buffer* buffer) const;
	};
}
