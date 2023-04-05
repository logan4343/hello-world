#pragma once
class BaseInterface;
class UseDerive
{
  public:
     UseDerive(BaseInterface* pBase);

     void showFunc1();
     void showFunc2();
     BaseInterface* mBase;

};
