//
//  cafe.cpp
//  Cafe
//
//  Created by Patrick Tumulty on 2/11/20.
//  Copyright © 2020 Patrick Tumulty. All rights reserved.
//

#include "cafe.hpp"
#include "item.hpp"
#include <iostream>
#include <string>
#include <map>
#include <math.h>


Cafe::Cafe()
{
    _inventory = new std::map<std::string, Item>();

}

Cafe::~Cafe()
{
    delete _inventory;
    delete _change;

}

void Cafe::setName(std::string name)
{
    _cafeName = name;
}

std::string Cafe::getName()
{
    return _cafeName;
}

void Cafe::addInventory(std::string item, int quantity, float price)
{
    Item _newItem = Item();
    _newItem.addMembers(item, quantity, price);
    _inventory->insert(std::pair<std::string, Item>(item, _newItem));
}



float Cafe::makeSale(std::string item, int quantity)
{
    float total;
    if (quantity > _inventory->at(item).getQuantity())
    {
        total = _inventory->at(item).getPrice() * _inventory->at(item).getQuantity();
        _inventory->at(item).subtractQuantity(_inventory->at(item).getQuantity());
    }
    else
    {
        total = _inventory->at(item).getPrice() * quantity;
        _inventory->at(item).subtractQuantity(quantity);
    }
    return total;
}

std::map<std::string, Item> * Cafe::getInventory()
{
    return _inventory;
}

std::map<float, int> * Cafe::cashRegister(float valueTotal, float amountGiven)
{
    _change = new std::map<float, int>();
    _change->insert(std::pair<float, int>(0.01, 0));
    _change->insert(std::pair<float, int>(0.05, 0));
    _change->insert(std::pair<float, int>(0.10, 0));
    _change->insert(std::pair<float, int>(0.25, 0));
    _change->insert(std::pair<float, int>( 1.0, 0));
    _change->insert(std::pair<float, int>( 5.0, 0));
    _change->insert(std::pair<float, int>(10.0, 0));
    _change->insert(std::pair<float, int>(20.0, 0));
    float amount = amountGiven - valueTotal;
    float moneyAmounts[8] = {20, 10, 5, 1, 0.25, 0.1, 0.05, 0.01};
    for (int i = 0; i < 8; i++)
    {
        float x = moneyAmounts[i];
        if ( floorf(amount / x) == 0)
        {
            continue;
        }
        else
        {
            _change->at(x) = floorf(amount/x);
            amount = roundf((amount - (floorf(amount/x) * x)) * 100) * 0.01;   
        }
    }
    return _change;
}



