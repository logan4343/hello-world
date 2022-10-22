#include<stdio.h>
#include<iostream>

using namespace std;


int foo()
{
  return 2;
}

int b;

int& foo1()
{
 int a = 2;
  b = 2;
 return b;
}

int main()
{

 int a = 1;

 cout << " a = " << a << ", &a =" << &a << endl;

 //cout << " &1 = " << &1 << endl;
 
  int* b = &a;

 cout << " *b = " << *b << ",b = " << b << endl;

 *b = 2;

 cout << " a = " << a << " *b = " << *b  << " b = " << b <<  endl;


 int& c = a;

  cout << " c = " << c << ", &c =" << &c << endl;


  cout << " &++c ="  << &++c <<  " c = " << c <<  endl;
   int d1 = 5;
  int &&d = std::move(d1) ;

  
  cout << " d = " << d << endl;

  cout <<  " d = " << &d << endl;

  cout << " d1 = " << d1 << endl;

return 0;


}


