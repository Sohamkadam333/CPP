#include <iostream>
using namespace std;
// int add(int a,int b){
//         return a + b;
// }
// int add(int a,int b,int c){
//         return a + b + c;
// }

// default argumnets
int add(int a, int b = 5, int c = 0){  //default value
        return a + b + c;
}

int main(){
        cout << add(10) << endl;
        cout << add(10, 20) << endl;
        cout << add(10, 20, 30) << endl;

        return 0;
}