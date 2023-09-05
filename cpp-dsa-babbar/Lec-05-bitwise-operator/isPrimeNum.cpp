#include <iostream>
using namespace std;

int main()
{
  int a = 0, b = 0, c = 0;
  while (a <= 0)
  {
    cout << "Enter positive integer a find it is prime or not: ";
    cin >> a;
  }
  cout << "Your entered number a is: " << a;

  cout << endl;

  for (int i = 2; i < a; i++)
  {
    if (a % i == 0)
    {
      cout << a << " is not prime number" << endl;
      cout << a << " is divided by " << i << endl;
      return 0;
    }
  }
  cout << a << " is prime number" << endl;
}