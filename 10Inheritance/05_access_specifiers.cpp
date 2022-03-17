#include <iostream>

using namespace std;

class A
{
private:
  int a;
  int b;
  int c;

public:
  int getA()
  {
    return a;
  }
  int getB()
  {
    return b;
  }
  int getC()
  {
    return c;
  }
};

class B : public A
{
  int a = 10;
  int b = 20;
  int c = 30;
};

class C : public B
{
  int a = 40;
  int b = 50;
  int c = 60;
};

int main()

{

  C c;
  cout << c.getA();

  return 0;
}