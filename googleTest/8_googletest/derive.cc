#include "derive.h"
#include <iostream>

using namespace std;

Derive::Derive()
{
  cout << " construct Derive" << endl;
}

Derive::~Derive()
{
  cout << " de-construct Derive" << endl;
}

void Derive::func1()
{
  cout << " Derive::func1()" << endl;
}

void Derive::showfunc2()
{
  cout << " Derive::show func2()" << endl;
}
