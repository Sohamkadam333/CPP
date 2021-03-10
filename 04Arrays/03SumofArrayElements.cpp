// Sum of Array Elements
#include<iostream>
using namespace std;
int main(){
        int A[] = {4, 8, 6, 9, 5, 2, 7};
        int n = 7, sum = 0;

        // uisng for loop
        // for (int i = 0; i < n; i++){
        //         sum = sum + A[i];
        // }


        // using for each loop
        for(auto x:A)
        {
                sum = sum + x;
        }

        cout << sum;
}