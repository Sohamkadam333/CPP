#include <iostream>

using namespace std;

int main()

{
  string s1 = "Hello";
  string s2 = "World";
  // cout << s1.append(" World") << endl;
  // cout << s1.insert(3, "Mango", 2) << endl;
  // cout << s1.replace(4, 0, "Mango");
  // s1.erase();
  s1.push_back('H');
  cout << s1 << endl;
  s1.pop_back();
  cout << s1 << endl;
  s1.swap(s2);
  cout << s1 << endl;
  cout << s2 << endl;

  return 0;
}