#include <iostream>
using namespace std;
int main()
{
  char name[100];
  char name2[100];
  // string name;
  // string name2;
  cout << "Enter Name : ";
  // cin >> name;
  // cin.get(name, 100);
  cin.getline(name, 100);
  cout << "Welcome " << name << endl;

  // cin.ignore();

  cout << "Enter Name Again : ";
  // cin >> name2;
  // cin.get(name2, 100);
  cin.getline(name2, 100);
  cout << "Welcome " << name2;
  return 0;
}