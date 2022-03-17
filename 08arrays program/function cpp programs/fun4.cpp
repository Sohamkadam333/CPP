// function with default argument
#include <iostream>
using namespace std;

int add(int a, int b, int c = 0)
{
  return a + b + c;
}

int main()

{
  cout << add(10, 20) << endl;
  cout << add(10, 20, 40) << endl;

  return 0;
}