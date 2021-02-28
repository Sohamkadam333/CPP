#include <iostream>
using namespace std;
int main()
{
        //find maximum of 2
        /*
        int x, y;
        cout << "Enter 2 no: ";
        cin >> x >> y;
        if(x>y)
        {
                cout << "max is: " << x;
        }
        else
        {
                cout << "Max is: " << y;
        }
        */

       //Number is positive of negative
       /*
       int x;
        cout << "Enter no: ";
        cin >> x ;
        if(x>=0)
        {
                cout << "Number is Positive: " << x;
        }
        else
        {
                cout << "Number is Negative: " << x;
        }
        */


        //Number is odd or even
        int x;
        cout << "Enter no: ";
        cin >> x ;
        if(x%2==0)
        {
                cout << "Number is even: " << x;
        }
        else
        {
                cout << "Number is odd: " << x;
        }
        return 0;
}