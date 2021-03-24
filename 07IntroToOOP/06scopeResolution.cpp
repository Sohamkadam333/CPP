#include<iostream>
using namespace std;
class Rectangle{
        private:
                int length;
                int breadth;
        public:
                int area(){
                        return length * breadth;
                }
                int perimeter();
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
};


// :: scope resolution operator
int Rectangle::perimeter(){
        return 2 * (length + breadth);
}

int main(){
        Rectangle r;
        r.setLength(10);
        r.setBreadth(5);
        cout << r.perimeter()<<endl;
        cout << r.area() << endl;

        return 0;
}