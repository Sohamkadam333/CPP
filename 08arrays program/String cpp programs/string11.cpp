#include <iostream>
#include <string>

using namespace std;

int main()

{
  string s1 = "Programming";
  string::iterator it;
  string::reverse_iterator rit;
  // for (it = s1.begin(); it != s1.end(); it++)
  // {
  //   cout << *it << endl;
  // }
  for (rit = s1.rbegin(); rit != s1.rend(); rit++)
  {
    cout << *rit << endl;
  }
  return 0;
}