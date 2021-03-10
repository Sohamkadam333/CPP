#include<iostream>
using namespace std;
int main(){
        // int arr[] = { 10, 20, 30, 40, 50 };
        // float arr[] = { 10.99f, 20.11f, 30.32f, 40, 50 };
        char arr[] = { 'A','B','F','K'};
        // cout << arr[3];



        // Simple for loop      
        // for (int i = 0; i < 5; i++){
        //         cout << arr[i]<<endl;
        // }


        // for each loopm  C++ 11
        for (auto num : arr) //auto if type don;t know
                cout<<num<<endl;
        

                return 0;
}
