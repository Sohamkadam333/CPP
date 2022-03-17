#include <iostream>
using namespace std;
class Rectangle
{
private:
  int length;
  int width;

public:
  Rectangle();
  Rectangle(int l, int w);
  Rectangle(Rectangle &r);
  void setLength(int l);
  void setWidth(int w);
  int getLength();
  int getWidth();
  int area();
};

class Cuboid : public Rectangle
{
private:
  int height;

public:
  Cuboid()
  {
    height = 1;
  }

  void setHeight(int h);
  int getHeight();
  int getCuboidArea();
  int areaOfCuboid();
};

int main()
{
  Cuboid c;
  c.setHeight(10);
  c.setLength(7);
  c.setWidth(2);
  cout << c.area() << endl;
  cout << c.areaOfCuboid();
}

Rectangle::Rectangle()
{
  length = 1;
  width = 1;
}

Rectangle::Rectangle(int l, int w)
{
  setLength(l);
  setWidth(w);
}

Rectangle::Rectangle(Rectangle &r)
{
  this->length = r.length;
  this->width = r.width;
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
void Rectangle::setWidth(int w)
{
  if (w > 0)
  {
    width = w;
  }
  else
  {
    width = 0;
  }
}

int Rectangle::getLength()
{
  return length;
}
int Rectangle::getWidth()
{
  return width;
}

int Rectangle::area()
{
  return width * length;
}

// Cuboid::Cuboid(int h)
// {
//   height = h;
// }

void Cuboid::setHeight(int h)
{
  if (h > 0)
  {
    height = h;
  }
  else
  {
    height = 0;
  }
}

int Cuboid::getHeight()
{
  return height;
}

int Cuboid::areaOfCuboid()
{
  int l = getLength();
  int w = getWidth();
  return 2 * (l * height + l * w + height * w);
}