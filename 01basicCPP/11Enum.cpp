#include <iostream>
using namespace std;
enum day
{
        mon,//0
        tue,//1
        wed,//2
        thu,//3
        fri,//4
        sat,//5
        sun//6
};
enum dept
{
        CS=1,
        ECE,//2
        IT,//3
        CIVIL//4
};
int main()
{
        // day d;
        // d = sun;
        // cout << d;
        dept d;
        d = IT;
        cout << d;
        return 0;
}