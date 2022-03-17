#include <iostream>

using namespace std;

int *fun()
{
  int *p = new int[5];
  for (int i = 0; i < 5; i++)
  {
    p[i] = 5 * i;
  }

  cout << p << endl;
  return p;
}

int main()

{

  int *ptr = fun();
  for (int i = 0; i < 5; i++)
  {
    cout << ptr[i] << endl;
  }
  cout << ptr;

  return 0;
}