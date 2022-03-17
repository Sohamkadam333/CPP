#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

int main()

{
  int a;
  char s1[50] = "23242";
  char s[50] = "50.44";
  cout << strtol(s1, NULL, 10) << endl;
  cout << strtof(s, NULL);

  return 0;
}