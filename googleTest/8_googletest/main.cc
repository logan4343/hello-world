//#include "derive.h"
#include "useDerive.h"
#include <iostream>
#include "mockBase.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using testing::Return;

int add(int a, int b)
{
  return (a+b);
}



TEST(testcase, shoule_3_when_1_and_2)
{

 EXPECT_EQ(3, add(1,2));

}

TEST(testcase, should_call_func1_when_mockbase)
{
   MockBase base1;
   EXPECT_CALL(base1, func2).Times(1);
   base1.func2();
}

TEST(test1, should_call_func1_when_use_derive)
{
   MockBase derive;
   UseDerive useDerive(&derive);
   //EXPECT_CALL(derive, func2).Times(1).WillRepeatedly(Return(3));
   ON_CALL(derive, func2()).WillByDefault(Return(333333));
   //EXPECT_CALL(derive, func2).Times(1).WillRepeatedly(Return(3));
   useDerive.showFunc2();

}

int main(int argc, char** argv) 
{
  //::testing::InitGoogleMock(&argc, argv);
  testing::InitGoogleTest(&argc, argv);
  cout << "hello world " << endl;
  return RUN_ALL_TESTS();
}


