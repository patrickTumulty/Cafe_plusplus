

#ifndef INTERFACE_H 
#define INTERFACE_H

#include <iostream>
#include "cafe.hpp"

class Interface
{
public:
    Interface();
    ~Interface();

    int mainLoop();
    void stockInventory();

    void printInventory();
    std::string formatString(Item item);
    std::string num_to_string(float itemPrice);
    std::string formatTitle();
    std::string formatLine();
    void readChangeMap(std::map<float, int> * changeMap);
    void clearScreen();
    Cafe * getCafe();

private:
    Cafe * m_cafe;
    int m_display_width;

};

#endif