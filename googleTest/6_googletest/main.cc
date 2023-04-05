#include "derive.h"
#include "useDerive.h"
#include <iostream>
#include "mockBase.h"
#include "mockDerive.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "sample2.h"

using namespace std;

extern MockDerive mockDerive;

int add(int a, int b)
{
  return (a+b);
}





/*
TEST(testcase, shoule_3_when_1_and_2)
{

 EXPECT_EQ(3, add(1,2));

}

TEST(testcase, should_call_func1_when_mockbase)
{
   MockBase base1;
   EXPECT_CALL(base1, func1).Times(1);
   base1.func1();
}

TEST(test1, should_call_func1_when_use_base)
{
   MockBase derive;
   UseDerive useDerive(&derive);
   EXPECT_CALL(derive, func1).Times(1);
   useDerive.showFunc1();

}

TEST(test2, shoud_noerror_when_use_derive)
{
   ::testing::Mock::AllowLeak(&mockDerive);
   Derive derive;
   EXPECT_CALL(mockDerive, func1).Times(1);
   derive.func1();

}*/



TEST_F(Sample2, testcase1)
{
  cout << " testcase1 " << endl;
  ASSERT_EQ(1, 1);
}


TEST_F(Sample2, testcase2)
{
  cout << " testcase2 " << endl;
  ASSERT_EQ(1, 1);
}


TEST_F(Sample2, testcase3)
{
  cout << " testcase3 " << endl;
  ASSERT_EQ(1, 1);
}

int main(int argc, char** argv) 
{
  //::testing::InitGoogleMock(&argc, argv);
  testing::InitGoogleTest(&argc, argv);
  cout << "hello world " << endl;
  return RUN_ALL_TESTS();
}


