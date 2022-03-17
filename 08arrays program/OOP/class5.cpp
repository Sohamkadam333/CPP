// Scope Resolution operator
// inline function

#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
  Rectangle();
  Rectangle(int length, int breadth);
  Rectangle(Rectangle &r);
  int area();
  int perimeter();
  void setLength(int l);
  void setBreadth(int b);
  // inline keyword is used to make function inline
  inline int getLength();
  int getBreadth();
};

int main()
{

  Rectangle r1(10, 20);
  cout << r1.area() << endl;
  cout << r1.getLength() << endl;
}

// class functions
// non parameterized constructor
Rectangle::Rectangle()
{
  length = 0;
  breadth = 0;
}

// parameterized constructor
Rectangle::Rectangle(int length, int breadth)
{
  setLength(length);
  setBreadth(breadth);
}

// copy constructor
Rectangle::Rectangle::Rectangle(Rectangle &r)
{
  length = r.length;
  breadth = r.breadth;
}

int Rectangle::area()
{
  return length * breadth;
}

int Rectangle::perimeter()
{
  return 2 * (length * breadth);
}

void Rectangle::setLength(int l)
{
  if (l > 0)
  {
    length = l;
  }
  else
  {
    length = 0;
  }
}

void Rectangle::setBreadth(int b)
{
  if (b > 0)
  {
    breadth = b;
  }
  else
  {
    breadth = 0;
  }
}

int Rectangle::getLength()
{
  return length;
}

int Rectangle::getBreadth()
{
  return breadth;
}