#pragma once
//#include <functional>
#include <iostream>
#include <functional>
#include <vector>
//class SignalBell;

template <typename... T>
class SignalBell
{
  public:
  SignalBell()
  {
     std::cout << "create a SignalBell" << std::endl;
  }

  //void(*pFun)(int);
 using FUNC = std::function<void(T...)>;
 std::vector<FUNC> pFuncs;
  //std::function<void(T...)> pFun{nullptr};
  //void connect(void(*p)(int))
  void connect(std::function<void(T...)> p)
  {
    pFuncs.push_back(p);
    //pFun = p;
    m_num = 9;
    //std::cout << "SignalBell connect  m_num = " << m_num << std::endl;
  };

  void emit(T... b)
  {
   //std::cout << "SignalBell emit  m_num = " << m_num << std::endl;
   for (auto& pFun : pFuncs)
   {
     pFun(b...);     
   } 
  
  };

 int m_num{0};


  static SignalBell& getInstance()
  {
      static SignalBell signalBell;
      return signalBell;
  }
};

