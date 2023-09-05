#include <iostream>
using namespace std;

int main()
{
  int a = 0, b = 0, c = 0;
  while (a <= 0)
  {
    cout << "Enter positive integer a to print even number upto the a: ";
    cin >> a;
  }
  cout << "Your entered number a is: " << a;

  cout << endl;

  for (int i = 0; i <= a; i++)
  {
    if (a % 2 != 0)
    {
      continue;
    }
    cout << " " << i << " ";
  }
  cout << endl;
}