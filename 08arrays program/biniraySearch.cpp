// for binary search must per performed on sorted array
#include <iostream>
using namespace std;
int main()
{
  int arr[10] = {99, 199, 299, 399, 499, 599, 699, 799, 899, 999};
  int low = 0;
  int high = 9;
  int mid;
  int key;
  cout << "Enter Key: ";
  cin >> key;

  while (low <= high)
  {
    mid = (low + high) / 2;
    if (key == arr[mid])
    {
      cout << "Key found at " << mid;
      return 0;
    }
    else if (key < arr[mid])
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  cout << "Key not found: ";
  return 0;
}