#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        int a, b, c, d, r1, r2;
        cout << "enter 3 no: ";
        cin >> a >> b >> c;
        r1 = -b + sqrt((b * b) - (4 * a * c)) / (2 * a);
        r2 = -b - sqrt((b * b) - (4 * a * c)) / (2 * a);
        d = sqrt((b * b) - (4 * a * c));
        if(d==0)
        {
                cout << "real and equal" << r1 << "\n"
                     << r2;
        }
        else if(d>0)
        {
                cout << "real and Unequal"<< r1 << "\n"
                     << r2;
        }
        if(d<0)
        {
                cout << "imaginary" << r1 << "\n"
                     << r2;
        }
        return 0;
}