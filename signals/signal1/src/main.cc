#include "signalBell.h"
#include "teachers.h"
#include "students.h"
//class Students;
//class Teachers;

int main()
{
  
 std::cout << " main.cc enter main() " << std::endl;
Students st1;
 Teachers  te1;

// std::cout << " main.cc create st1 te1 " << std::endl;
  st1.createConnect();

 //std::cout << " main.cc run st1.createConnect() " << std::endl;
  te1.createEmit();
 
 //std::cout << " main.cc run te1.createEmit() " << std::endl;
  return 0;
}
