#include <iostream>
using namespace std;

class Rectangle
{
  // by default private
public:
  float length = 10.52;
  float breadth = 20.78;

  float area(float a = 10, float b = 20)
  {
    return a * b;
  }

  float perimeter()
  {
    return 2 * (length + breadth);
  }
};

int main()

{

  // typeof r1 is Rectangle
  Rectangle r1;
  cout << r1.area(10.76f, 24.44f) << endl;
  cout << r1.perimeter() << endl;
  return 0;
}