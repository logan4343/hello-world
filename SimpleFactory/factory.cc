#include "factory.h"

class Banana: public Fruit
{
  public:
    Banana()
    {
          cout << " create a banana " << endl;
    }
    void showname()
    {
          cout << " name : banana " << endl;
    }

};


class Apple: public Fruit
{
  public:
    Apple()
    {
          cout << " create a apple " << endl;
    }
    void showname()
    {
          cout << " name : apple " << endl;
    }

};

class Grape: public Fruit
{
  public:
    Grape()
    {
          cout << " create a grape " << endl;
    }
    void showname()
    {
          cout << " name : grape " << endl;
    }

};


Fruit* Factory::createFruit(FRUITTYPE type)
  {
      switch(type)
      {
         case banana:
           return new Banana();
         case apple:
           return new Apple();
        case grape:
            return new Grape();
        default:
           return nullptr;

      }

  }






