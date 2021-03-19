#include <iostream>
using namespace std;
int main()
{
        int x = 100;
        int *p = &x;
        cout << "X value " << x<<endl;
        cout << "X Address " << &x << endl;
        cout << "X Address in P " << p << endl;
        cout << "X value in P " << *p << endl;
        cout << "P Address " << &p << endl;

        return 0;
}