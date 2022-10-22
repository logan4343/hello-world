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
    cout << "Teachers::createEmit done" << endl;
  }

