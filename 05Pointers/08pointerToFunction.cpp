#include<iostream>
using namespace std;


void display(){
        cout<<"Hello";
}


int main(){

        // normal method
        // display();

        // using pointer
        void (*fp)();  //declaration
        fp = display;  //initialization
        (*fp)();  //calling

        return 0;
}