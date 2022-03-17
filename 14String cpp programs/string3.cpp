#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  // char s1[100];
  // cout << "Enter a string : ";
  // // cin >> something;
  // cin.getline(s1, 100);
  // cout << "String length is " << strlen(s1);

  char s1[40] = "Good";
  char s2[30] = "Morning";
  // cout << strcat(s1, s2);
  // cout << strncat(s1, s2, 4);
  // cout << strcpy(s1, s2);
  cout << strncpy(s1, s2, 4);

  return 0;
}