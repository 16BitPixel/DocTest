#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include <iostream>

int factorial(int number) { return number <= 1 ? number : factorial(number - 1) * number; }

class SomeClass
{
public:
    SomeClass() 
    {
        std::cout << "Hello";
    }
};

TEST_CASE("testing the factorial function")
{
    CHECK(factorial(1) == 1);
    CHECK(factorial(2) == 2);
    CHECK(factorial(3) == 6);
    CHECK(factorial(10) == 3628800);
}

TEST_SUITE("Testing")
{
    TEST_CASE("testing the factorial function")
{
    CHECK(factorial(1) == 1);
    CHECK(factorial(2) == 2);
    CHECK(factorial(3) == 6);
    CHECK(factorial(10) == 3628800);
}


    TEST_CASE("Just A Check")
    {
        SomeClass* SC = new SomeClass();
        CHECK(SC != nullptr);
        MESSAGE(" SC not null ");
    }


}