#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char s1[30] = "hello";
  char s2[40] = "Hello";
  // if (strstr(s1, s2) != NULL)
  //   cout << strstr(s1, s2);
  // else
  //   cout << "not found";
  cout << strcmp(s1, s2);
  return 0;
}