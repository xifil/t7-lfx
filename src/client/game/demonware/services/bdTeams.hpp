#pragma once

namespace demonware {
	class bdTeams final : public service {
	public:
		bdTeams();

	private:
		void create_team(service_server* server, byte_buffer* buffer) const;
		void update_team_name(service_server* server, byte_buffer* buffer) const;
		void promote_member(service_server* server, byte_buffer* buffer) const;
		void kick_member(service_server* server, byte_buffer* buffer) const;
		void leave_team(service_server* server, byte_buffer* buffer) const;
		void propose_membership(service_server* server, byte_buffer* buffer) const;
		void reject_membership(service_server* server, byte_buffer* buffer) const;
		void accept_membership(service_server* server, byte_buffer* buffer) const;
		void get_public_profiles(service_server* server, byte_buffer* buffer) const;
		void get_private_profile(service_server* server, byte_buffer* buffer) const;
		void get_public_member_profiles(service_server* server, byte_buffer* buffer) const;
		void get_private_member_profiles(service_server* server, byte_buffer* buffer) const;
		void set_public_profile(service_server* server, byte_buffer* buffer) const;
		void set_private_profile(service_server* server, byte_buffer* buffer) const;
		void set_public_member_profile(service_server* server, byte_buffer* buffer) const;
		void set_private_member_profile(service_server* server, byte_buffer* buffer) const;
		void get_memberships(service_server* server, byte_buffer* buffer) const;
		void get_members(service_server* server, byte_buffer* buffer) const;
		void get_outgoing_proposals(service_server* server, byte_buffer* buffer) const;
		void withdraw_proposal(service_server* server, byte_buffer* buffer) const;
		void demote_member(service_server* server, byte_buffer* buffer) const;
		void promote_member_to_owner(service_server* server, byte_buffer* buffer) const;
		void get_team_info(service_server* server, byte_buffer* buffer) const;
		void get_incoming_proposals(service_server* server, byte_buffer* buffer) const;
		void send_instant_message(service_server* server, byte_buffer* buffer) const;
		void get_memberships_user(service_server* server, byte_buffer* buffer) const;
		void send_instant_message_to_team(service_server* server, byte_buffer* buffer) const;
		void search_public_team_profiles(service_server* server, byte_buffer* buffer) const;
		void add_application(service_server* server, byte_buffer* buffer) const;
		void get_applications_by_team(service_server* server, byte_buffer* buffer) const;
		void accept_application(service_server* server, byte_buffer* buffer) const;
		void reject_application(service_server* server, byte_buffer* buffer) const;
		void auto_join_team(service_server* server, byte_buffer* buffer) const;
		void create_team_with_profiles(service_server* server, byte_buffer* buffer) const;
		void ban_member(service_server* server, byte_buffer* buffer) const;
		void unban_member(service_server* server, byte_buffer* buffer) const;
		void block_application(service_server* server, byte_buffer* buffer) const;
		void unblock_application(service_server* server, byte_buffer* buffer) const;
		void update_team_type(service_server* server, byte_buffer* buffer) const;
		void set_online(service_server* server, byte_buffer* buffer) const;
		void get_memberships_with_counts(service_server* server, byte_buffer* buffer) const;
		void get_memberships_with_counts_user(service_server* server, byte_buffer* buffer) const;
		void search_teams(service_server* server, byte_buffer* buffer) const;
		void create_team_with_profiles_and_team_type(service_server* server, byte_buffer* buffer) const;
		void get_memberships_with_counts_and_team_type_user(service_server* server, byte_buffer* buffer) const;
		void get_memberships_with_counts_and_team_type(service_server* server, byte_buffer* buffer) const;
		void get_team_info_with_team_type(service_server* server, byte_buffer* buffer) const;
		void set_team_auto_join(service_server* server, byte_buffer* buffer) const;
		void get_team_auto_join(service_server* server, byte_buffer* buffer) const;
		void get_members_and_privileges(service_server* server, byte_buffer* buffer) const;
	};
}
