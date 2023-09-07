#include <iostream>
using namespace std;

int main()
{

  int a = 0, b = 0;
  cout << "We are going to find power of the number";
  while (a <= 0)
  {
    cout << "Enter Positive Integer: ";
    cin >> a;
  }
  cout << "Your entered number is: " << a << endl;
  while (b <= 0)
  {
    cout << "Enter positive int as power of given number: ";
    cin >> b;
  }
  cout << "Your entered power is: " << b;

  cout << endl;
  long a1 = a;
  int b1 = b;
  while (b1 > 1)
  {
    a1 = a1 * a1;
    b1--;
  }
  cout << "Value of " << a << " power " << b << " is: " << a1 << endl;
}