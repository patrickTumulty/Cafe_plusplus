

#include <iostream>
#include "interface.hpp"
#include "cafe.hpp"

int main() 
{
    Interface * interface = new Interface();
    interface->mainLoop();
    std::cout << "Goodbye!" << std::endl;
    return 0;
}
