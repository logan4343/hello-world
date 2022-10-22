#include "signalBell.h"
#include "students.h"
#include <functional>


using namespace std;

void show(int a)
{
  cout << "I am show function a = " << a << endl;
}
  void Students::createConnect()
  {
   std::function<void(int)> f = std::bind(&Students::showStudent, this, placeholders::_1);
   SignalBell::getInstance().connect(f);
  }

 void Students::showStudent(int a)
 {
     cout << "showStudent a = " << a << endl;
  }
