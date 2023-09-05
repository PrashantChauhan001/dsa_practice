#include <iostream>
using namespace std;

int main()
{
  // for loop consist three part in round bracket
  // for(initialization, condition, updation){}

  int a = 0, b = 0, c = 0;
  while (a <= 0)
  {
    cout << "Enter positive integer a value: ";
    cin >> a;
  }
  cout << "Your entered number a is: " << a;

  cout << endl;

  while (b <= 0)
  {
    cout << "Enter positive integer b value: ";
    cin >> b;
  }
  cout << "Your entered number b is: " << b;

  cout << endl;

  while (c <= 0)
  {
    cout << "Enter positive integer c value: ";
    cin >> c;
  }
  cout << "Your entered number c is: " << c;

  cout << endl;

  for (int i = 0, j = 0, k = 0; i <= a || j <= b || k <= c; i++, j++, k++)
  {
    cout << "i: " << i << " j: " << j << " k: " << k << endl;
  }

  cout << endl;
  cout << "without any code in for round bracket" << endl;
  // without any code in for round bracket
  int i = 1;
  for (;;)
  {
    if (i < a)
    {
      cout << "i: " << i << endl;
    }
    else
    {
      break;
    }
    i++;
  }
  cout << endl;
  cout << "Sum one to a" << endl;
  int sum = 0;
  for (int i = 1; i <= a; i++)
  {
    sum += i;
  }
  cout << "Sum from one to " << a << " is: " << sum << endl;
}