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


Cafe::Cafe()
{
    _inventory = new std::map<std::string, Item>();

}

Cafe::~Cafe()
{

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


