#include<iostream>
using namespace std;
int main(){
        int A[5] = {11, 22, 33, 44, 55};
        int *p = A;
        int *q = &A[3];
        int d;

        // d = (location of q=A[3] - location of p=A[0])/4(size of int 4);
        // d = q - p;
        d = p - q;
        
        
        
        cout << d;
        // Result = positive 1st pointer is far and 2nd is near
        // Result = negative 1st pointer is near and 2nd pointer is far;

        return 0;
}