/*
Function overloading is a feature in C++ where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading. In Function Overloading “Function” name should be the same and the arguments should be different.
*/ 

#include<iostream>
using namespace std;

int add(int a,int b){
        return a + b;
}

int add(int a,int b,int c = 30){
        return a + b + c;
}


int main(){
        int a = 10, b = 20, c;
        // int total = add(a, b);
        // cout << total<<endl;
       int total = add(a, b, c);
        cout << total<<endl;
        return 0;
}