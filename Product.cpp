#include "Product.h"

Product::Product()
{
    name = "NoName";
    price = 0;
    weight = 0;
}

Product::Product(string name, float price, float weight)
{
    this->name = name;
}

void Product::setName(string name)
{

}

void Product::setPrice(float price)
{

}

void Product::setWeight(float weight)
{

}

string Product::getName() const
{
    return string();
}

float Product::getPrice() const
{
    return 0.0f;
}

float Product::getWeight() const
{
    return 0.0f;
}

void Product::showInfo() const
{

}
