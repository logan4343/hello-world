#pragma once
class BaseInterface;
class UseDerive
{
  public:
     UseDerive(BaseInterface* pBase);

     void showFunc1();

     BaseInterface* mBase;

};
