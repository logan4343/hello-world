//#include "signalBell.h"
#include "students.h"
#include <functional>


using namespace std;

void show(int a)
{
  cout << "I am show function a = " << a << endl;
}


Students::Students(Signals& signals):m_signals(signals)
{
}
  void Students::createConnect()
  {
   std::function<void(int)> f = std::bind(&Students::showStudent, this, placeholders::_1);
   m_signals.Bell_1.connect(f);
   cout << "Students::createConnect " << endl;
  }

 void Students::showStudent(int a)
 {
     cout << "showStudent a = " << a << endl;
  }
