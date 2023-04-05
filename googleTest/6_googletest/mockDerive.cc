#include "derive.h"
#include "mockDerive.h"
MockDerive mockDerive;
Derive::Derive()
{
}

Derive::~Derive()
{
}

void Derive::func1()
{
   mockDerive.func1(); 
}
