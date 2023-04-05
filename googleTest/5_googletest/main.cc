#include "derive.h"
#include "useDerive.h"
#include <iostream>
#include "mockBase.h"
#include "mockDerive.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;

extern MockDerive mockDerive;

int add(int a, int b)
{
  return (a+b);
}




/*
int main()
{
 cout << " enter main() " << endl;

 Derive derive1;

 UseDerive useDerive1(&derive1);

 useDerive1.showFunc1();

}*/
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
int main(int argc, char** argv) 
{
  //::testing::InitGoogleMock(&argc, argv);
  testing::InitGoogleTest(&argc, argv);
  cout << "hello world " << endl;
  return RUN_ALL_TESTS();
}


