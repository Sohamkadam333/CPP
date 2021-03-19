#include <iostream>
using namespace std;
int main()
{
        int A[5] = {11, 12, 13, 14, 15};
        int *p = A;

        // initial position A[0]
        cout << *p<<" "<<p<<endl;
        
        // Position Incremented by 1 A[1] 
        cout << *++p<<" "<<p<<endl;

        // A[2]
        cout << *++p<<" "<<p<<endl;

        // A[5]
        p = p + 2;
        cout << *p<<" "<<p<<endl;

        // position Decremented by 2 A[3]
        p = p - 2;
        cout << *p<<" "<<p<<endl;

        return 0; 
}
