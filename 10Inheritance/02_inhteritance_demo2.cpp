#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
  Rectangle();
  Rectangle(int l, int b);
  Rectangle(Rectangle &r);
  int getLength();
  int getBreadth();
  void setLength(int l);
  void setBreadth(int b);
  int area();
  int perimeter();
};

class Cuboid : public Rectangle
{
private:
  int height;

public:
  Cuboid(int h)
  {
    height = h;
  }
  void setHeight(int h)
  {
    if (h > 0)
    {

      height = h;
    }
    else
    {
      height = 1;
    }
  }

  int getHeight()
  {
    return height;
  }
  int volume()
  {
    return getLength() * getBreadth() * height;
  }
};

int main()

{

  Cuboid c1(10);
  c1.setBreadth(30);
  c1.setLength(20);
  cout << c1.getBreadth() << endl;
  cout << c1.getLength() << endl;
  cout << c1.getHeight() << endl;
  cout << c1.volume() << endl;

  return 0;
}

// Reactangle Class Functions
Rectangle::Rectangle()
{
  length = 1;
  breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
  setLength(l);
  setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r)
{
  length = r.length;
  breadth = r.breadth;
}

int Rectangle::getLength()
{
  return length;
}
int Rectangle::getBreadth() { return breadth; }

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
int Rectangle::area()
{
  return length * breadth;
}

int Rectangle::perimeter()
{
  return 2 * (length * breadth);
}