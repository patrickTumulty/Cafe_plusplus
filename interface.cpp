

#include <iostream>
#include "cafe.hpp"
#include "interface.hpp"


Interface::Interface()
{
    m_display_width = 30;
    m_cafe = Cafe();
    this->stockInventory();
    this->mainLoop();
}

Interface::~Interface()
{
    

}

int Interface::mainLoop()
{
    int welcome = 0;
    std::string selectedItem;
    std::string itemNumber;
    while (true)
    {
        this->clearScreen();
        this->printInventory();
        if (welcome == 0)
        {
            std::cout<<"Welcome to " + this->m_cafe.getName() << std::endl;
            welcome++;
        }
        std::cout << "What would you like? >> ";
        std::cin >> selectedItem;
        if (this->m_cafe.getInventory()->find(selectedItem) == this->m_cafe.getInventory()->end())
        {
            continue;
        }
        std::cout << "How many? >> ";
        std::cin >> itemNumber;
        if (std::stoi(itemNumber, nullptr) > this->m_cafe.getInventory()->at(selectedItem).getQuantity())
        {
            std::cout << "We only have " + std::to_string(this->m_cafe.getInventory()->at(selectedItem).getQuantity()) + " available." << std::endl;
        }
        std::cout << "Total = " + this->num_to_string(this->m_cafe.makeSale(selectedItem, std::stoi(itemNumber, nullptr))) << std::endl;
        std::cout << "Would you like to make another purchase? [ Y / N ] >> ";
        std::cin >> selectedItem; 
        if (selectedItem == "N" || selectedItem == "n")
        {
            break;
        }

    }

    return 0;
}

void Interface::printInventory()
{
    std::cout << this->formatTitle() << std::endl;
    for (std::map< std::string, Item >::iterator it=m_cafe.getInventory()->begin(); it != m_cafe.getInventory()->end(); it++)
    {
        std::cout << this->formatString(it->second) << std::endl;   
    }
    std::cout << this->formatLine() << std::endl;

}

std::string Interface::num_to_string(float itemPrice)
{
    std::string price = std::to_string(itemPrice);
    int val = 0;
    for (int i = 0; i < price.length(); i++)
    {
        if (price[i] == '.')
        {
            val = i + 3;
            break;
        }
    }
    return "$" + price.substr(0, val);
}

std::string Interface::formatString(Item item)
{
    std::string name = "- " + item.getName() + " ";
    std::string price = " " + this->num_to_string(item.getPrice());
    int val = m_display_width - (name.length() + price.length());
    std::string line = name;
    for (int i = 0; i < val; i++)
    {
        line += ".";
    }
    line += price;
    return line;
}

std::string Interface::formatTitle()
{
    std::string line = "= " + m_cafe.getName() + " ";
    int val = m_display_width - line.length();
    for (int i = 0; i < val; i++)
    {
        line += '=';
    }
    return line;
}

std::string Interface::formatLine()
{
    std::string line = "=";
    for (int i = 0; i < m_display_width - 1; i++)
    {
        line += "=";
    }
    return line;
}

void Interface::clearScreen()
{
    for (int i = 0; i < 50; i++)
    {
        std::cout<<"\n";
    }
}

void Interface::stockInventory()
{
    this->m_cafe.setName("Cafe++");
    this->m_cafe.addInventory("Coffee", 100, 3.28);
    this->m_cafe.addInventory("Tea", 50, 2.10);
    this->m_cafe.addInventory("Latte", 75, 5.20);
    this->m_cafe.addInventory("Scones", 15, 4.25);
    this->m_cafe.addInventory("Donuts", 22, 4.30);
    this->m_cafe.addInventory("Sandwich", 20, 7.80);
    this->m_cafe.addInventory("Salad", 20, 8.20);
}

