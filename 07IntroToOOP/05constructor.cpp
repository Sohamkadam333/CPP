#include <iostream>
using namespace std;
class Rectangle{
        private:
                int length;
                int breadth;

        public:
                // default constructor
                // Rectangle(){
                //         length = 1;
                //         breadth = 1;
                // }


                // // Parameterized constructor
                Rectangle(int l=0,int b=0){
                        setLength(l);
                        setBreadth(b);
                }

                // // Copy Constuctor
                Rectangle(Rectangle &r){
                        length = r.length;
                        breadth = r.breadth;
                }



                //set method == Mutator
                int setLength(int l){
                        length = l;
                }
                int setBreadth(int b){
                        breadth = b;
                }
                //get method == Assessor
                int getLength(){
                        return length;
                }
                int getBreadth(){
                        return breadth;
                }
                int area(){
                        return length * breadth;
                }
                int perimeter(){
                        return 2 * (length * breadth);
                }

};

int main(){
        Rectangle r(10,5);
        cout << r.area()<<endl;
        Rectangle r2(r);
        cout << r2.area()<<endl;
        return 0;
}