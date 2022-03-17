// pointer  to an object

#include <iostream>
using namespace std;

class Rectangle
{
public:
  int length;
  int breadth;

  int area()
  {
    return length * breadth;
  }
  int perimeter()
  {
    return 2 * (length * breadth);
  }
};
int main()

{

  // ********** Pointer to an object
  // Rectangle r1;
  // r1.length = 10;
  // r1.breadth = 20;
  // cout << r1.area() << endl;

  // Rectangle *p;
  // p = &r1;
  // p->length = 30;
  // p->breadth = 40;
  // cout << p->area() << endl;
  // cout << r1.area() << endl;

  //*************** Pointer to Heap Memory

  Rectangle *ptr = new Rectangle;
  ptr->length = 10;
  ptr->breadth = 20;
  cout << ptr->area() << endl;

  return 0;
}