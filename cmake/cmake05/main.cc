#include <iostream>

using namespace std;

int main()
{

 #ifdef TEST_OPTION
  cout << " def test_option" << endl;
 #else
  cout << " not def test_option" << endl;
  #endif
   cout << " hello world main.cc " << endl;
  return 0;
}
