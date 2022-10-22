#include "signals.h"
#include "teachers.h"
using namespace std;


Teachers::Teachers(Signals& signals):m_signals(signals)
{
}

  void Teachers::createEmit()
  {
    cout << "Teachers::createEmit " << endl;
    m_signals.Bell_1.emit(6);
  //  cout << "Teachers::createEmit done" << endl;
  }

  void Teachers::showDouble()
  {
     m_signals.Bell_2.emit(6.66);
  }

 void Teachers::showIntDouble()
 {
    m_signals.Bell_3.emit(1, 1.11);
 }
