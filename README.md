# hello-world
just the first one repository
I am logan , and try to do the hello-world project

#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
   string str = "Hello_2022";
   cout << "str = " << str << endl;
   cout << "--------  regex_match-----------" << endl;
   
   cout << regex_match(str, regex("(.{5})_(\\d{3})")) << endl;
   cout << regex_match(str, regex("(.{5})_(\\d{4})")) << endl;
   
  smatch result;
  regex reg("(.{5})_(\\d{4})");
	if(regex_match(str,result,reg))
	{
		cout << " result[0] = " << result[0] << endl;
		cout << " result[1] = " << result[1] << endl;
		cout << " result[2] = " << result[2] << endl;
	}
   cout << "--------  regex_search-----------" << endl;
   string str1 = "Hello_2022, bye_2021";
   regex pattern("\\d{4}");
   smatch result1;

   regex_search(str1, result1, pattern);
   cout << " str = " << str1 << endl;
   cout << " search result = " << result[2] << endl;
	
  cout << "--------  regex_replace-----------" << endl;
  string str2 = "Hello_World_2022";
  cout << " str2 = " << str2 << endl;
  regex pattern2("(.{5})_(.{5})_(\\d{4})");
  //smatch result2 = regex_replace(str2, pattern2, "2022");
  
  cout << " replace result = " << regex_replace(str2, regex("Hello"), "Hi") << endl;
  cout << " replace result = " << regex_replace(str2, pattern2, "2022") << endl;
 
  cout << " replace result = " << regex_replace(str2, pattern2, "$3$1$2$3") << endl;
	
	return 0;
}


