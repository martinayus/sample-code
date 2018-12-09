/*
 * Order.h
 *
 *  Created on: 3 May 2018
 *      Author: martinayusuf
 */

#ifndef MAIN_CPP_S2S_ONLINE_GARDENING_V01_ORDER_H_
#define MAIN_CPP_S2S_ONLINE_GARDENING_V01_ORDER_H_
#include <ctime>
#include "Item.h"

class Order {
private:
	int order_no;
	time_t order_date;
	double total_cost;
public:
	Order();
	virtual ~Order();
	void addItem(Item anItem);

	time_t getOrderDate() const {
		return order_date;
	}

	int getOrderNo() const {
		return order_no;
	}

	double getTotalCost();
};

#endif /* MAIN_CPP_S2S_ONLINE_GARDENING_V01_ORDER_H_ */
