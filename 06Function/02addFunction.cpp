#include<iostream>
using namespace std;
int add(int x,int y){
        return x + y;
}

int main(){

        int a = 10,b = 20;
        int c = add(a, b);
        cout << c << endl;

        return 0;
}