#pragma once

namespace demonware {
	class bdUserGroups final : public service {
	public:
		bdUserGroups();

	private:
		void create_group(service_server* server, byte_buffer* buffer) const;
		void delete_group(service_server* server, byte_buffer* buffer) const;
		void join_group(service_server* server, byte_buffer* buffer) const;
		void leave_group(service_server* server, byte_buffer* buffer) const;
		void get_membership_info(service_server* server, byte_buffer* buffer) const;
		void change_member_type(service_server* server, byte_buffer* buffer) const;
		void get_num_members(service_server* server, byte_buffer* buffer) const;
		void get_members(service_server* server, byte_buffer* buffer) const;
		void get_memberships(service_server* server, byte_buffer* buffer) const;
		void read_stats_by_rank(service_server* server, byte_buffer* buffer) const;
		void get_group_lists(service_server* server, byte_buffer* buffer) const;
	};
}
