#include <iostream>
#include <string>
using namespace std;

int main()

{
  string greet = "Good Morning";
  cout << greet.length() << endl;
  cout << greet.size() << endl;
  cout << greet.append(" Hello ") << endl;
  cout << greet.find('n') << endl;
  cout << greet.capacity() << endl;
  // cout << greet.resize(20) << endl;
  cout << greet.max_size() << endl;
  cout << greet.empty() << endl;
  cout << greet.clear() << endl;

  return 0;
}