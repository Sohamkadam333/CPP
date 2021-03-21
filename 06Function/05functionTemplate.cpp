/*
Function templates. Function templates are special functions that can operate with generic types. This allows us to create a function template whose functionality can be adapted to more than one type or class without repeating the entire code for each type. In C++ this can be achieved using template parameters.
*/ 

#include <iostream>
using namespace std;

// normal functions
// int max(int a,int b){
//         return (a > b) ? a : b;
// }


// float max(float a,float b){
//         return (a > b) ? a : b;
        
// }


// function termplate
template <class T>
T getMax(T a,T b){
        return (a > b) ? a : b;
}



int main(){

        cout << getMax(10, 20) << endl;
        cout << getMax(10.50f, 20.50f) << endl;

        return 0;
}

// function template
// #include <iostream>
// using namespace std;

// template <class T>
// T GetMax (T a, T b) {
//   T result;
//   result = (a>b)? a : b;
//   return (result);
// }

// int main () {
//   int i=5, j=6, k;
//   long l=10, m=5, n;
//   k=GetMax<int>(i,j);
//   n=GetMax<long>(l,m);
//   cout << k << endl;
//   cout << n << endl;
//   return 0;
// }