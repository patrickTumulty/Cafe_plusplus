
#include <iostream>
#include "../src/cafe.hpp"
#include "../src/interface.hpp"
#include "../src/item.hpp"
#include <gtest/gtest.h>

TEST(CHANGETEST, correctChange)
{
    Cafe * cafe = new Cafe();
    ASSERT_EQ(1, cafe->cashRegister(10, 15)->at(5.0));
}
TEST(CHANGETEST2, correctChange)
{
    Cafe * cafe = new Cafe();
    std::map<float, int> * change = cafe->cashRegister(1.24, 3);
    ASSERT_EQ(1, change->at(1.0));
    ASSERT_EQ(3, change->at(0.25));
    ASSERT_EQ(1, change->at(0.01));
}

TEST(CHANGETEST3, correctChange)
{
    Cafe * cafe = new Cafe();
    ASSERT_EQ(4, cafe->cashRegister(10, 14)->at(1.0));
}

TEST(CHANGETEST4, correctChange)
{
    Cafe * cafe = new Cafe();
    std::map<float, int> * change = cafe->cashRegister(123.14, 150);
    ASSERT_EQ(1, change->at(20.0));
    ASSERT_EQ(1, change->at(5.0));
    ASSERT_EQ(1, change->at(1.0));
    ASSERT_EQ(3, change->at(0.25));
    ASSERT_EQ(1, change->at(0.1));
    ASSERT_EQ(1, change->at(0.01));
}

TEST(SALETEST1, correctTotal)
{
    Interface * interface = new Interface();
    float expected = 3.26;
    ASSERT_EQ(expected, interface->getCafe()->makeSale("Coffee", 1));
}

TEST(SALETEST2, correctTotal)
{
    Interface * interface = new Interface();
    float expected = 26;
    ASSERT_EQ(expected, interface->getCafe()->makeSale("Latte", 5));
}

TEST(SALETEST3, correctTotal)
{
    Interface * interface = new Interface();
    float expected = 78;
    ASSERT_EQ(expected, interface->getCafe()->makeSale("Sandwich", 10));
}

TEST(SALETEST4, correctTotal)
{
    Interface * interface = new Interface();
    float expected = 29.75;
    ASSERT_EQ(expected ,interface->getCafe()->makeSale("Scones", 7));
}


int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}