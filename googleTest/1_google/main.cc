//#include "derive.h"
//#include "useDerive.h"
#include <iostream>
//#include "mockBase.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;

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

TEST(testcase, shoule_3_when_1_and_2)
{
 EXPECT_EQ(3, add(1,2));
}

TEST(testcase, shoule_4_when_2_and_2)
{
 EXPECT_EQ(4, add(2,2));
}

TEST(testcase1, shoule_not_5_when_2_and_2)
{
 EXPECT_NE(5, add(2,2));
}
int main(int argc, char** argv) 
{
  //::testing::InitGoogleMock(&argc, argv);
  testing::InitGoogleTest(&argc, argv);
  cout << "hello world " << endl;
  return RUN_ALL_TESTS();
}


