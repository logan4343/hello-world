#pragma once
//#include <functional>
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <string.h>
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
      std::cout << "     signalBell connect p = " << p.target_type().name() << std::endl;
    auto itr = std::find_if(pFuncs.begin(), pFuncs.end(), [&](std::function<void(T...)> b)
            {
                std::cout << "     enter findif " << std::endl;    
                if (p.target_type().name() == b.target_type().name() )
                {
                       std::cout << "     return 1 " << std::endl;
                       return 1;
                }
                else
                {
                      return 0;
                }
             }
         ); 

    if (itr == pFuncs.end())
    {
        pFuncs.push_back(p);
        m_num++;
        std::cout << "     m_num = " << m_num << std::endl;
    }
    //pFun = p;
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

