// Sum of Array Elements
#include<iostream>
using namespace std;
int main(){
        int A[] = {14, 8, 6, 9, 5, 2, 7};
        int n = 7, sum = 0;
       int max = A[0];
        // uisng for loop
        // for (int i = 0; i < n; i++){
        //         if(max < A[i]){
        //                 max = A[i];
        //         }
        // }

        cout << max;


        // using for each loop
        for(auto x:A)
        {
                if(max < x){
                        max = x;
                }
        }

        // cout << sum;
}