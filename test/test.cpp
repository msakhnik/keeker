#include <gtest/gtest.h>
#include <iostream>
#include <numeric>

using namespace std;

bool test_fun()
{
    return true;
}

TEST(Build, Test)
{
    ASSERT_TRUE(test_fun());
}