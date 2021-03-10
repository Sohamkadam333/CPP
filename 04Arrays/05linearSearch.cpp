// Sum of Array Elements
#include<iostream>
using namespace std;
int main(){
        // int A[] = {14, 8, 6, 9, 5, 2, 7};
        int A[10],n = 10, sum = 0, number,index;
        // cout << "Enter The Number between {14, 8, 6, 9, 5, 2, 7} and i will tell you it's index::  ";
        cout << "Enter 10 Numbers: ";
        // uisng for loop
        // reading values
        for (int i = 0; i < n;i++){
                cin >> A[i];
        }

        cout << "Enter any Number between above and i Will give you index of it: ";
        cin >> number;
        // performing Linear search
                for (int i = 0; i < n; i++)
                {
                        if (number == A[i])
                        {
                                 cout << "Index Found "<< endl;
                                index = i;
                                cout<<number <<" Index is: "<< index;
                                return 0;
                        }
                }
                return -1;

}