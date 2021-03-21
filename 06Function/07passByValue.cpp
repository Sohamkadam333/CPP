#include<iostream>
using namespace std;

int swap(int a,int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << a << b << endl;

}

int main()
{
        int a = 10, b = 20;
        cout << a << b << endl;
        swap(a, b);
        cout << a << b << endl;
        return 0;
}