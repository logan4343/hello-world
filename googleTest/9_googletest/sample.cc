#include "sample.h"


Sample::Sample()
{
 cout << "Sample() " << endl;
}

Sample::~Sample()
{
  cout << " ~Sample() " << endl;
}

 void Sample::SetUpTestCase()
{
	cout << "SetUpTestCase() " << endl;
}

void Sample::TearDownTestCase()
{
	cout << "TearDownTestCase()"<< endl;
}

void Sample::SetUp()
{
  cout << "SetUp()" << endl;
}

void Sample::TearDown()
{
	cout << "TearDown()" << endl;
}

void Sample::bar1()
{
	cout << " bar1() " << endl;
}

int Sample::bar2(int a, int b)
{
	cout << " bar2 a = " << a << ", b = " << b << endl;
	return a+b;
}

void Sample::bar3(int a, int b)
{
	cout << "bar3 a = " << a << ", b = " << b << endl;
}
TEST_F(Sample, check3)
{
	EXPECT_EQ(3,3);
}

