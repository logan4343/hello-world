#include "factory.h"
#include <memory>

int main()
{
 shared_ptr<Factory> pFactory = make_shared<Factory>();

 Fruit* pbanana =  pFactory->createFruit(banana);

  return 0;
}

