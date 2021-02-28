#include <iostream>
using namespace std;
int main()
{
        /*
        int hour;
        cout << "Enter Hour: ";
        cin >> hour;
        if(hour>9 && hour <=18)
        {
                cout << "Working hour";
        }
        else
        {
                cout << "Leisure hour";
        }
        */

        float age;
        cout << "Enter age: ";
        cin >> age;
        if(age>= 12 && age<=50)
        {
                cout << "Young";
        }
        else
        {
                cout << "Not Young";
        }

        return 0;
}