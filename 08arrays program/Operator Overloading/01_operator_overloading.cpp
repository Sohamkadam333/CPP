// operator Overloading Demo
#include <iostream>
using namespace std;

class Complex
{
public:
  int real;
  int img;

  Complex(int real = 0, int img = 0)
  {
    this->real = real;
    this->img = img;
  }
  // Complex add(Complex c)
  // operator overloading
  Complex operator+(Complex c)
  {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
  }
};

int main()
{

  Complex c1(10, 20);
  Complex c2(44, 55);
  Complex c3;
  // c3 = c1.add(c2);
  // cout << c3.real << endl;
  // cout << c3.img << endl;

  // operator overloading syntax
  c3 = c1 + c2;
  cout << c3.real << endl;
  cout << c3.img << endl;

  return 0;
}