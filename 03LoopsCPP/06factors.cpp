//"Factors" are the numbers you multiply to get another number. For instance, factors of 15 are 3 and 5, because 3×5 = 15. Some numbers have more than one factorization (more than one way of being factored). For instance, 12 can be factored as 1×12, 2×6, or 3×4.

#include <iostream>
using namespace std;
int main()
{
        int n;
        cout << "Enter no: ";
        cin >> n;
        for (int i = 1; i <= n;i++)
        {
                if(n % i == 0)
                {
                        cout << i << endl;

                }
        }


        return 0;
}