#include "signalBell.h"
#include "teachers.h"
using namespace std;


  void Teachers::createEmit()
  {
    SignalBell::getInstance().emit(6);
  }

