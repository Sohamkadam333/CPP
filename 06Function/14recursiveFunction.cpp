#include <iostream>
using namespace std;

int rec(int n){
        if(n >= 0){
                cout << n<<endl;
                rec(n-1);
        }
}

int main(){
        int n = 5;
        rec(n);
}