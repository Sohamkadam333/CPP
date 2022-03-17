// function template

#include <iostream>

using namespace std;

template <class T>
T maxim(T a, T b)
{
  return a > b ? a : b;
}

int main()

{
  cout << maxim(10, 20) << endl;
  cout << maxim(19.40f, 40.55f) << endl;
  return 0;
}