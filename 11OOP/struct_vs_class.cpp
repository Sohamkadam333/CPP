#include <iostream>
using namespace std;

struct Demo
{
  int l;
  int b;
  void display()
  {
    cout << l << " " << b << endl;
  }
};

int main()

{
  Demo d1;
  d1.l = 10;
  d1.b = 20;
  d1.display();
  return 0;
}