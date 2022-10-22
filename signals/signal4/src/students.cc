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
  std::function<void(double)> f = std::bind(&Students::showDouble,  this, placeholders::_1);
  m_signals.Bell_2.connect(f);

  std::function<void(int, double)> g = std::bind(&Students::showIntDouble, this, placeholders::_1, placeholders::_2);
  //m_signals.Bell_3.connect(g);
}
  void Students::createConnect()
  {
   std::function<void(int)>   f = std::bind(&Students::showStudent, this, placeholders::_1);
   m_signals.Bell_1.connect(f);
   cout << "Students::createConnect " << endl;
  }

 void Students::showStudent(int a)
 {
     cout << "showStudent a = " << a << endl;
 }

 void Students::showDouble(double d)
{
   cout << "Students::showDouble = " << d << endl;
}

void Students::showIntDouble(int a, double b)
{
   cout << " Students::showIntDouble int = " << a << ", double = " << b << endl;
}
