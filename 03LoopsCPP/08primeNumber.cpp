//Prime numbers are numbers that have only 2 factors: 1 and themselves. For example, the first 5 prime numbers are 2, 3, 5, 7, and 11. By contrast, numbers with more than 2 factors are call composite numbers


#include <iostream>
using namespace std;
int main()
{
        /*
        int n, i;
        cout << "Enter no: ";
        cin >> n;
        bool isPirme = true;
        for (i = 2; i <= n / 2; i++)
        {
                if(n % i == 0)
                {
                        isPirme = false;
                        break;
                }
        }
        if(isPirme)
        {
                cout << "Prime Number: " << n;
        }
        else{
                cout << "Not a prime number ";
        }
        */

        int i, count = 1, n;
        cout << "Enter no: ";
        cin >> n;
        for (i = 2; i <= n; i++)
        {
                if(n % i ==0)
                {
                        count++;
                }
        }

        if(count == 2)
        {
                cout << "Prime Number: " << n;
        }

        else{
                cout << "Not a Prime Number: " << n;
        }
                return 0;
}