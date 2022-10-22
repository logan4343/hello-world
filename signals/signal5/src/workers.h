#pragma once
#include "signals.h"


class Workers
{
  public:
  Workers(Signals& siganls);
  //void createConnect();
  //void showWorkers(int a);
  //void showDouble(double d);
  void showIntDouble(int a, double b);
  Signals& m_signals;
};
