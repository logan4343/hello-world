#pragma once
//#include <functional>
#include <iostream>
#include <functional>
//class SignalBell;

template <typename T>
class SignalBell
{
  public:
  SignalBell()
  {
     std::cout << "create a SignalBell" << std::endl;
  }

  //void(*pFun)(int);

  std::function<void(T)> pFun;
  //void connect(void(*p)(int))
  void connect(std::function<void(T)> p)
  {
    //m_num = num;
    pFun = p;
    m_num = 9;
    //std::cout << "SignalBell connect  m_num = " << m_num << std::endl;
  };

  void emit(T b)
  {
   //std::cout << "SignalBell emit  m_num = " << m_num << std::endl;
   pFun(b);
  };

 int m_num{0};


  static SignalBell& getInstance()
  {
      static SignalBell signalBell;
      return signalBell;
  }
};

