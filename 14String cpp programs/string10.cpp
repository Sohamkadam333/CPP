#include <iostream>
#include <string>

using namespace std;

int main()

{
  string s1 = "Hello";
  string s2 = "Programing";
  cout << s2.at(7) << endl;
  cout << s2[7] << endl;
  cout << s1 + " " + s2 << endl;

  return 0;
}