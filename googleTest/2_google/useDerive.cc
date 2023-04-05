#include "useDerive.h"
#include "baseInterface.h"
#include <iostream>

using namespace std;

UseDerive::UseDerive(BaseInterface* pBase)
{
  cout << " construct UseDerive" << endl;

  mBase = pBase;
}

void UseDerive::showFunc1()
{
  mBase->func1();
}
