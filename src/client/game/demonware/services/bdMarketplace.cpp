#include <std_include.hpp>
#include "../services.hpp"

#include <utils/io.hpp>

namespace demonware {
	bdMarketplace::bdMarketplace()
		: service(80, "bdMarketplace")
	{
		this->register_task(42, &bdMarketplace::start_exchange_transaction); // COD POINTS purchase ?
		//this->register_task(43, &bdMarketplace::purchase_on_steam_initialize); // COD POINTS purchase ?
		this->register_task(49, &bdMarketplace::get_expired_inventory_items);
		this->register_task(60, &bdMarketplace::steam_process_durable);
		this->register_task(122, &bdMarketplace::purchase_skus);
		this->register_task(130, &bdMarketplace::get_balance);
		this->register_task(165, &bdMarketplace::get_inventory_paginated);
		this->register_task(193, &bdMarketplace::put_players_inventory_items);
		this->register_task(232, &bdMarketplace::get_entitlements);
	}

	void bdMarketplace::start_exchange_transaction(service_server* server, byte_buffer* buffer) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdMarketplace::purchase_on_steam_initialize(service_server* server, byte_buffer* buffer) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdMarketplace::get_expired_inventory_items(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdMarketplace::steam_process_durable(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdMarketplace::purchase_skus(service_server* server, byte_buffer* buffer) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdMarketplace::get_balance(service_server* server, byte_buffer* buffer) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());

		reply.send();
	}

	void bdMarketplace::get_inventory_paginated(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdMarketplace::put_players_inventory_items(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}

	void bdMarketplace::get_entitlements(service_server* server, byte_buffer* /*buffer*/) const {
		// TODO:
		auto reply = server->create_reply(this->task_id());
		reply.send();
	}
}
