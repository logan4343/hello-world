#include "base.h"
#include "iostream"
using namespace std;

void Base::show()
{
  cout << " Base::show " << endl;

  showName();
  showClass();

}


void Base::showName()
{

  cout << " Base :: showName " << endl;
}
void Base::showClass()
{
  cout << " Base:: showClass " << endl;
}
