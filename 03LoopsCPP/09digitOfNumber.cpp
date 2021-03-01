#include <iostream>
using namespace std;
int main()
{
        int remainder, number;
        cout << "Enter no: ";
        cin >> number;
        while(number > 0)
        {
                remainder = number % 10;
                cout << remainder << endl;
                number = number / 10;
        }

        return 0;
}