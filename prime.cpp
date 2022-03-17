#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter a number";
  cin >> num;
  if (num > 0)
  {
    for (int i = 1; i <= num; i++)
    {
      int count = 0;
      for (int j = 1; j <= i; j++)
      {
        if (i % j == 0)
        {
          count++;
        }
      }
      if (count == 2)
      {
        cout << "Prime Number : " << i << endl;
      }
      else
      {
        cout << "Not a prime number : " << i << endl;
      }
    }
  }
}