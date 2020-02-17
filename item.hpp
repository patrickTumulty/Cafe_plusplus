

#ifndef ITEM_H
#define ITEM_H

class Item
{
public:
    Item();
    ~Item();
    void addMembers(std::string name, int quantity, float price);
    void addQuantity(int val);
    void subtractQuantity(int val);

    int getQuantity();
    float getPrice();
    std::string getName();

private:
    int _quantity;
    float _price;
    std::string _name;

};


#endif