

#ifndef CAFE_H
#define CAFE_H

#include <iostream>
#include "item.hpp"
#include <string>
#include <map>
#include <vector>

class Cafe
{
public:
    Cafe();
    ~Cafe();
    void setName(std::string name);
    std::string getName();
    void addInventory(std::string item, int quantity, float price);
 
    std::map<std::string, Item> * getInventory();
    float makeSale(std::string item, int quantity);
    std::map<float, int> * cashRegister(float valueTotal, float amountGiven);

private:
    std::string _cafeName;
    std::map<std::string, Item> * _inventory;


};

#endif
