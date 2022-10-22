#pragma once
#include "signals.h"

class Teachers
{
 public:
  Teachers(Signals& siganls);
  void createEmit();
  Signals& m_signals;
};
