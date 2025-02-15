#pragma once

namespace demonware {
	class bdMarketplace final : public service {
	public:
		bdMarketplace();

	private:
		void start_exchange_transaction(service_server* server, byte_buffer* buffer) const;
		void purchase_on_steam_initialize(service_server* server, byte_buffer* buffer) const;
		void get_expired_inventory_items(service_server* server, byte_buffer* buffer) const;
		void steam_process_durable(service_server* server, byte_buffer* buffer) const;
		void purchase_skus(service_server* server, byte_buffer* buffer) const;
		void get_balance(service_server* server, byte_buffer* buffer) const;
		void get_inventory_paginated(service_server* server, byte_buffer* buffer) const;
		void put_players_inventory_items(service_server* server, byte_buffer* buffer) const;
		void get_entitlements(service_server* server, byte_buffer* buffer) const;
	};
}
