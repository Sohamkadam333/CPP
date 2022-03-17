#include <iostream>
#include <string>
using namespace std;

int main()

{
  string s1 = "Hello";
  string s2 = "Hello";
  char s3[30];
  // s1.copy(s3, s1.length());
  // cout << s3;
  // cout << s1.find('o');
  // cout << s1.rfind('l');
  cout << s1.find_first_of('l') << endl;
  cout << s1.find_last_of('l') << endl;

  cout << s1.substr(2, 4) << endl;
  cout << s1.compare(s2);
  return 0;
}