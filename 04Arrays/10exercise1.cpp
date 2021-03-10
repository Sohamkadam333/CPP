#include<iostream>
using namespace std;
int main(){

        int i, j;
        int numbers[10],sum = 0,avg;
        cout<< "Enter 10 Numbers: "<<endl;
        for (i = 0; i < 10;i++){
                cin >> numbers[i];
        }

        for (int i = 0; i < 10;i++){
                sum = sum + numbers[i];
        }

                cout << sum << endl;
        avg = sum / 10;
        cout << avg << endl;
        return 0;
}