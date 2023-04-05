#include "derive.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
  Derive d1;

  d1.show();

  cout << "--------------" << endl;
  
  std::unique_ptr<Derive> d2 = std::make_unique<Derive>();
  d2->show();
  
  cout << "--------------" << endl;
  std::unique_ptr<Base>    b2 = std::make_unique<Derive>();
  b2->show();
  
  cout << "--------------" << endl;
  std::unique_ptr<Base>    b3 = std::make_unique<Base>();
  b3->show();

  return 1;
}
