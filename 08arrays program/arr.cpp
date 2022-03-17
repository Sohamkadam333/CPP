#include <iostream>
using namespace std;
int main()
{
  int numbers[5] = {91, 42, 113, 14, 75};
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << numbers[i];
  // }
  // int sum = 0;
  int max = numbers[0];
  // forEach
  for (int x : numbers)
  {
    if (max < x)
    {
      max = x;
    }
    // sum = sum + x;
  }
  cout << max;
  // cout << sum;
  return 0;
}