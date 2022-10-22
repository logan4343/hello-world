#pragma once
#include "signals.h"


class Students
{
  public:
  Students(Signals& siganls);
  void createConnect();
  void showStudent(int a);
  void showDouble(double d);
  Signals& m_signals;
};
