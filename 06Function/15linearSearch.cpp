#include <iostream>
using namespace std; 

int search(int A[],int n, int key){
        for (int i = 0; i < n; i++)
                {
                        if (key == A[i])
                        {
                                return i;
                        }
                }
                return 0;
}

int main(){
        int A[10], n = 10,number;
        cout << "Enter 10 Numbers: ";
        // uisng for loop
        // reading values
        for (int i = 0; i < n;i++){
                cin >> A[i];
        }

        cout << "Enter any Number between above and i Will give you index of it: ";
        cin >> number;

        int index = search(A, 10, number);
}