// constructor
// non-paramaterized constructor
// parameterized constructor
// copy constructor
// deep copy constructor

#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
  // non parameterized constructor
  Rectangle()
  {
    length = 0;
    breadth = 0;
  }

  // parameterized constructor
  Rectangle(int length, int breadth)
  {
    setLength(length);
    setBreadth(breadth);
  }

  // copy constructor
  Rectangle(Rectangle &r)
  {
    length = r.length;
    breadth = r.breadth;
  }

  int area()
  {
    return length * breadth;
  }

  int perimeter()
  {
    return 2 * (length * breadth);
  }

  void setLength(int l)
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

  void setBreadth(int b)
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

  int getLength()
  {
    return length;
  }

  int getBreadth()
  {
    return breadth;
  }
};

int main()
{

  // default constructor
  Rectangle r1;
  r1.setLength(10);
  r1.setBreadth(20);
  cout << r1.area() << endl;

  // non parameterized constructor
  Rectangle r2;
  cout << r2.area() << endl;

  // paramaterized constructor
  Rectangle r3(18, 24);
  cout << r3.area() << endl;

  // copy constructor
  Rectangle r4(r3);
  cout << r4.area();

  return 0;
}