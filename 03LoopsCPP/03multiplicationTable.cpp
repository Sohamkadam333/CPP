#include <iostream>
using namespace std;
int main()
{
        int n;
        cout << "Enter no: ";
        cin >> n;
        for (int i = 1; i <= 10;i++)
        {
                cout << n << " * " << i << " = " << i * n << endl;
        }
}