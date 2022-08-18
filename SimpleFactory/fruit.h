#pragma once
#include <iostream>

using namespace std;


typedef enum FruitType
{
   banana,
   apple,
   grape
}FRUITTYPE;

class Fruit
{

public:
virtual void showname() = 0;

};
