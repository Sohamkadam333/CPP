#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()

{
  string name;
  cout << "Enter name : ";
  getline(cin, name);
  cout << "Name is : " << name << endl;
  for (int i = 0; i < name.length(); i++)
  {
    cout << name[i] << endl;
  }

  return 0;
}