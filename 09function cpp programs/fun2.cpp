// function overloading
#include <iostream>

using namespace std;

int sum(int a, int b)
{
  return a + b;
}

int sum(int a, int b, int c)
{
  return a + b + c;
}

float sum(float a, float b)
{
  return a + b;
}

int main()

{

  cout << sum(10, 20) << endl;
  cout << sum(10.4f, 20.44f) << endl;
  cout << sum(10, 20, 30) << endl;
  return 0;
}