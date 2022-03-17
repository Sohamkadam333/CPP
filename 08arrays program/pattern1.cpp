#include <iostream>
using namespace std;
int main()
{
  int count = 1;
  int number;
  cout << "number";
  cin >> number;
  for (int i = 0; i < number; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}