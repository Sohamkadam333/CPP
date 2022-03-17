#include <iostream>
using namespace std;
int main()
{
  int i = 10;
  int *p = &i;
  cout << "i value : " << i << endl;
  cout << "i address : " << &i << endl;
  cout << "p value : " << p << endl;
  cout << "p address : " << &p << endl;
  cout << "p pointer value address : " << *p << endl;
  return 0;
}