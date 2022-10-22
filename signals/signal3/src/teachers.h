#pragma once
#include "signals.h"

class Teachers
{
 public:
  Teachers(Signals& siganls);
  void createEmit();
   void showDouble();
  Signals& m_signals;
};
