#include <iostream>
using namespace std;
class Rectangle{
        public:
                int length;
                int breadth;

                int area(){
                        return length * breadth;
                }

                int perimeter(){
                        return 2 * (length + breadth);
                }
};

int main(){
        Rectangle r;
        Rectangle *p;
        p = &r;
        r.length = 10;

        // dot operator for normal variable
        cout << r.length << endl;
        // cout << p->length << endl;

        // arrow operator pointer variable
        p->length = 20;
        p->breadth = 5;



        // cout << r.length << endl;
        cout << p->length << endl;
        cout << p->area() << endl;
        cout << p->perimeter() << endl;


        return 0;
}