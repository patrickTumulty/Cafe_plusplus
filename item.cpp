

#include <iostream>
#include "item.hpp"

Item::Item()
{
    
}

Item::~Item()
{

}

void Item::addMembers(std::string name, int quantity, float price)
{
    _name = name;
    _quantity = quantity;
    _price = price;
    
}
void Item::addQuantity(int val)
{
    _quantity += val;
}

void Item::subtractQuantity(int val)
{
    _quantity -= val;
    if (_quantity < 0)
    {
        _quantity = 0;
    }
}

int Item::getQuantity()
{
    return _quantity;
}

float Item::getPrice()
{
    return _price;
}

std::string Item::getName()
{
    return _name;
}