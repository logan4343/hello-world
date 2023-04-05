#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "mockBase.h"
#include "sample.h"

using namespace testing;
int add(int a, int b)
{
	cout <<  a << " + " << b  << " = " << (a+b) << endl;
  return (a+b);
}

void show()
{
	cout << " show() " << endl;
}

TEST(testcase, expected_4_add_2_2)
{
  EXPECT_EQ(4, add(2,2));
}

TEST_F(Sample, check1)
{
	EXPECT_EQ(1,1);
}


TEST_F(Sample, check4)
{
	MockBase mockBase1;
	EXPECT_CALL(mockBase1, func2).Times(1).WillOnce(testing::Return(3));
	cout << mockBase1.func2() << endl;
}

TEST_F(Sample, check5)
{
	MockBase mockBase1;
	EXPECT_CALL(mockBase1, func2).Times(1).WillOnce(testing::Return(3));
	cout << mockBase1.func2() << endl;
}

TEST_F(Sample, check6)
{
	MockBase mockBase1;
	EXPECT_CALL(mockBase1, func3).Times(1).WillOnce(testing::Return(33));
	cout << mockBase1.func3(1,2) << endl;
}

TEST_F(Sample, check7)
{
	MockBase mockBase1;
	EXPECT_CALL(mockBase1, func3(_, _)).Times(1).WillOnce(testing::Return(7));
	cout << mockBase1.func3(1,2) << endl;
}


TEST_F(Sample, check8)
{
	MockBase mockBase1;
	EXPECT_CALL(mockBase1, func1).Times(1).WillOnce(Invoke(this, &Sample::bar1));
	mockBase1.func1();
}

TEST_F(Sample, check9)
{
	MockBase mockBase1;
	EXPECT_CALL(mockBase1, func3).Times(1).WillOnce(Invoke(this, &Sample::bar2));
	mockBase1.func3(1,2);
}
int main(int argc,  char** argv)
{
 testing::InitGoogleTest(&argc, argv);
 

 return RUN_ALL_TESTS();
}
