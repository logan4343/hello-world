#pragma once
#include "signals.h"


class Students
{
  public:
  Students(Signals& siganls);
  void createConnect();
  void showStudent(int a);
  void showDouble(double d);
  void showIntDouble(int a, double b);
  Signals& m_signals;
};
