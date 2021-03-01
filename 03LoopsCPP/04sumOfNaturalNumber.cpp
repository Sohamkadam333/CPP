//Natural numbers are a part of the number system which includes all the positive integers from 1 till infinity and are also used for counting purpose. It does not include zero (0). ... excluding zero, fractions, decimals and negative numbers. Note: Natural numbers do not include negative numbers or zero.


#include <iostream>
using namespace std;
int main()
{
        int sum = 0,n;
        cout << "Enter no: ";
        cin >> n;
        for (int i = 1; i <= n;i++)
        {
                sum = sum + i;
                // cout << sum<<endl;
        }
        cout << sum<<endl;

}