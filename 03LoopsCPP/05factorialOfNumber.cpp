//Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer and denoted by that integer and an exclamation point. Thus, factorial seven is written 7!, meaning 1 × 2 × 3 × 4 × 5 × 6 × 7. Factorial zero is defined as equal to 1.

#include <iostream>
using namespace std;
int main()
{
        // int fact=0, n;
        // cout << "Enter no: ";
        // cin >> n;
        // fact = n;
        // for (int i = n-1; i <= 0; i--)
        // {
        //         fact = fact * i;
        //         // n--;
        //         cout << fact;
        // }

        int fact = 1, n;
        cout << "Enter no: ";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                fact = fact * i;
        }
        cout << fact;
}