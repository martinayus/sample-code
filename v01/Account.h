/*
 * Account.h
 *
 *  Created on: 2 May 2018
 *      Author: martinayusuf
 */

#ifndef MAIN_CPP_S2S_ONLINE_GARDENING_V01_ACCOUNT_H_
#define MAIN_CPP_S2S_ONLINE_GARDENING_V01_ACCOUNT_H_
#include <ctime>
#include "Order.h"

class Account {
private:
	int account_id;
	time_t date_opened;
public:
	Account();
	virtual ~Account();

	int getAccountId() {
		return account_id;
	}

	time_t getDateOpened( ) {
		return date_opened;
	}

	void addOrder( Order anOrder );

	void getOrders();
};

#endif /* MAIN_CPP_S2S_ONLINE_GARDENING_V01_ACCOUNT_H_ */
