#pragma once
//#include <functional>
#include <iostream>
#include <functional>
//class SignalBell;

//template <typename T>
class SignalBell
{
  public:
  SignalBell()
  {
     std::cout << "create a SignalBell" << std::endl;
  }

  //void(*pFun)(int);

  std::function<void(int)> pFun;
  void connect(void(*p)(int))
  {
    //m_num = num;
    pFun = p;
   // std::cout << "connect = " << m_num << std::endl;
  };

  void emit(int b)
  {
   // std::cout << "emit = " << m_num << std::endl;
   pFun(b);
  };

 int m_num{0};


  static SignalBell& getInstance()
  {
      static SignalBell signalBell;
      return signalBell;
  }
};

