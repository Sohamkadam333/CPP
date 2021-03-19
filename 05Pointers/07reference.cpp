#include<iostream>
using namespace std;
int main(){
        int x = 10;
        int &y = x;
        x++;
        cout << x << endl;
        y++;
        cout << y << endl;

        return 0;
}