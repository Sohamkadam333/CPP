#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        int remainder, number, amstromg = 0,initialNumber;
        cout << "Enter no: ";
        cin >> number;
        initialNumber = number;
        while(number > 0)
        {
                remainder = number % 10;
                amstromg = amstromg + (remainder * remainder * remainder);
                number = number / 10;
        }
        // cout << amstromg;

        if(amstromg == initialNumber)
        {
                cout << "Amstrong Number: " << initialNumber;
        }
        else
        {
                cout << "Not an Amstrong Number: " << initialNumber;
        }

        return 0;
}