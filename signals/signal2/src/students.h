#pragma once
#include "signals.h"


class Students
{
  public:
  Students(Signals& siganls);
  void createConnect();
  void showStudent(int a);
  Signals& m_signals;
};
