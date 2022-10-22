#include<stdio.h>
#include<iostream>
using namespace std;

int&& add()
{
  return 4;
}


int main()
{
  int a = 1;
  int& b = a;
  int&& c = std::move(a);  


   int d = c;

  const  int& e = add();
 //  int& e = a;
   cout << " a = " << a << endl;

   cout << " c =  " << c << endl;
   
   cout << " d =  " << d << endl;

   cout << " e = " << e << endl;
   return 1;
}
