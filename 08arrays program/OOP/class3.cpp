
// Abstraction
// accessers and mutateors

#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
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

  Rectangle r1;
  r1.setLength(10);
  r1.setBreadth(-20);
  cout << "Length is : ";
  cout << r1.getLength() << endl;
  cout << "Breadth is : ";
  cout << r1.getBreadth() << endl;
  cout << "Area is : ";
  cout << r1.area() << endl;
  // cout<<
  return 0;
}