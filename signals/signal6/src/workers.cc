//#include "signalBell.h"
#include "workers.h"
#include <functional>


using namespace std;


Workers::Workers(Signals& signals):m_signals(signals)
{

  cout << "Workers connect Bell_3 " << endl;
   std::function<void(int, double)> g = std::bind(&Workers::showIntDouble, this, placeholders::_1, placeholders::_2);
  m_signals.Bell_3.connect(g);
}

void Workers::showIntDouble(int a, double b)
{
   cout << " Workers::showIntDouble int = " << a << ", double = " << b << endl;
}
