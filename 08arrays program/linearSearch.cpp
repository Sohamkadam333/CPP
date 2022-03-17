#include <iostream>
using namespace std;
int main()
{
  int arr[10];
  cout << "Linear Search:::::: ";
  cout << "Enter 10 numbers: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cin >> arr[i];
  }

  int key;
  cout << "Enter Key: ";
  cin >> key;
  cout << endl;
  for (int i = 0; i < 10; i++)
  {
    if (key == arr[i])
    {
      cout << key << " Key found at index " << i;
      return 0;
    }
  }

  cout << "UnSuccessfull Search invalid key";

  return 0;
}