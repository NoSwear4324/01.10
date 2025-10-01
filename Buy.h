#pragma once
#include <string>
#include "Product.h"
#include <iostream>
using namespace std;

class Buy : public Product
{
	int amount;
public:
	Buy(Product p, int amount);
	void setAmount(int amount);
	int getAmount()const;
	float calctotalPrice()const;
	float calctotalWeight()const;
	void showBuy()const;
};

