#include "sample2.h"
#include <iostream>

using namespace std;

Sample2::Sample2()
{
  cout << "Sample2::Sample2 " << endl;
}

Sample2::~Sample2()
{
  cout << "Sample2::~Sample2 " << endl;
}
void Sample2::SetUpTestCase()
{
  cout << "Sample2::SetUpTestCase()" << endl;
}


void Sample2::TearDownTestCase()
{
  cout << "Sample2::TearDownTestCase()" << endl;
}

void Sample2::SetUp()
{
  cout << "Sample2::SetUp()" << endl;
}


void Sample2::TearDown()
{
  cout << "Sample2::TearDown()" << endl;
}
