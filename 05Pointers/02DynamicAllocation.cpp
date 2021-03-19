#include <iostream>
using namespace std;
int main(){

        int *p = new int[5];
        p[0] = 11;
        p[1] = 12;

        // p = nullptr;  
        // delete []p;  delete pointer p
        cout << p[1];
        return 0;
}