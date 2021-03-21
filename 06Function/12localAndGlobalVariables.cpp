#include <iostream>
using namespace std;
int g = 10;

int fun(){
        g = 30;
        cout << g<<endl;
}

int main(){
        int a = 10;
        cout << a + g<<endl;
        {
                int g = 30;
                g++;
                cout << g<<endl;
        }
        fun();
}