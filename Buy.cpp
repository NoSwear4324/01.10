#include "Buy.h"

Buy::Buy(Product p, int amount) :Product(p)
{
    this->amount = amount;
}

void Buy::setAmount(int amount)
{
    this->amount = amount;
}

int Buy::getAmount() const
{
    return amount;
}

float Buy::calctotalPrice() const
{
    return amount * getPrice();
}

float Buy::calctotalWeight() const
{
    return amount * getWeight();
}

void Buy::showBuy() const
{

}
