#include "Test.hpp"
#include <iostream>

Test::Test(int n) : n(n)
{}

Test::Test()
{}

Test::~Test()
{}

Test2::Test2(int n) : n(n)
{}

Test2::Test2()
{}

Test2::~Test2()
{}

Test2::Test2(Test2 const & copy)
{
    *this = copy;
}
