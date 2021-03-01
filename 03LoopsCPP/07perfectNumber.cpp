//Perfect number, a positive integer that is equal to the sum of its proper divisors. The smallest perfect number is 6, which is the sum of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.

#include <iostream>
using namespace std;
int main()
{
        /*
        int n, sum = 0, i;
        cout << "Enter no: ";
        cin >> n;
        for (i = 1; i <= n;i++)
        {
                if(n % i == 0)
                {
                        cout << i << endl;
                        // i++;
                        sum = sum + i;
                }
        }
        i--;
        if((sum / 2) == i)
        {
                cout << "Perfect Number: " << i;

        }
        else{
                cout << "Not a Perfect Number: " << i;
        }

        */

        int i, n ,sum = 0;
        cout << "Enter no: ";
        cin >> n;
        for (i = 1; i <= n; i++)
        {
                if(n % i == 0)
                {
                        sum = sum + i;
                }
        }

        if(n * 2 == sum)
        {
                cout << "Perfect Number: " << n;
        }
        else
        {
                cout << "Not a perfect Number: " << n;
        }

                return 0;
}