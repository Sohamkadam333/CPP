#include <iostream>
using namespace std;
int main()
{
        //using while loop
        /*
        int n, i = 1;
        cout << "Enter no: ";
        cin >> n;
        while (i <= n)
        {
                cout << i<<endl;
                i++;
        }
        */

       //using do while loop
       int n, i = 1;
        cout << "Enter no: ";
        cin >> n;
        do
        {
                cout << i<<endl;
                i++;

        } while (i <= n);
        return 0;
}