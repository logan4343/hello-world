#include "simple1.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(testcase1, should_be_4_when_2_add_2)
{
  ASSERT_EQ(4, add(2,2));
}


TEST(testcase1, should_be_9_when_2_add_7)
{
  ASSERT_EQ(7, add(2,5));
}
