#include <iostream>
using namespace std;
int main()
{
        //find maximun of 3 no;
        /*
        int a, b, c;
        cout << "Enter 3 numbers: ";
        cin >> a >> b >> c;
        if(a>b && a>c)
        {
                cout << a << " Is greater";
        }
        else if(b>a && b>c)
        {
                cout << b << " Is greater";
        }
        else
        {
                cout << c << " Is greater";

        }
        */


       // avergae marks
       /*
        int m1, m2, m3,avg;
        cout << "Enter marks of 3 Subjects: ";
        cin >> m1 >> m2 >> m3;
        avg = (m1 + m2 + m3) / 3;
        if(avg >= 60){
                cout << "A grade";
        }

        else if(avg >= 35 && avg < 60)
        {
                cout << "B grade";

        }
        else if(avg < 35)
        {
                cout << "C grade";

        }
        */

        int day;
        cout << "Enter day: ";
        cin >> day;
        if(day == 1 )
        {
                cout << "Mon";
        }
        else if(day == 2 )
        {
                cout << "Tue";
        }
        else if(day == 3 )
        {
                cout << "Wed";
        }
        else if(day == 4 )
        {
                cout << "Thu";
        }
        else if(day == 5 )
        {
                cout << "Fri";
        }
        else if(day == 6 )
        {
                cout << "Sat";
        }
        else if(day == 7 )
        {
                cout << "Sun";
        }

        return 0;
}