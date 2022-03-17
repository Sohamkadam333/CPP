#include <iostream>
using namespace std;

class Base
{
private:
  int x;

public:
  Base()
  {
    cout << "Default constructor of base" << endl;
  }
  Base(int x)
  {
    cout << "Parameterized constructor of base " << x << endl;
  }
};

class Derived : public Base
{
private:
  int x;

public:
  Derived()
  {
    cout << "Default constructor of derived" << endl;
  }
  Derived(int a)
  {
    cout << "Parameterized constructor of derived " << a << endl;
  }
};

int main()
{
  Derived d(10);

  return 0;
}