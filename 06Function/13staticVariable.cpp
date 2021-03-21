#include <iostream>
using namespace std;
int fun(){
        static int v = 0;
        v++;
        int a = 5;
        cout << a << " " << v << endl;
}

int main(){
        fun();
        fun();
        fun();
}