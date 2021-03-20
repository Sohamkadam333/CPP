#include<iostream>
using namespace std;
int max(int a,int b){
        if(a>b)
                return a;
        else
                return b;
}
int main(){

        int a = 10, b = 20;
        int maxNumber = max(a, b);
        cout << maxNumber << endl;

        return 0;
}