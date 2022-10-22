#include "signalBell.h"
#include "students.h"
using namespace std;

void show(int a)
{
  cout << "I am show function a = " << a << endl;
}
  void Students::createConnect()
  {
   SignalBell::getInstance().connect(show);
  }

