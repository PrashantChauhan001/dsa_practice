#include <iostream>
using namespace std;

int main()
{
  int a = 0, b = 0;
  while (a <= 0)
  {
    cout << "Enter Decimal value for the a: ";
    cin >> a;
  }
  cout << "Your entered number a is: " << a;

  cout << endl;

  while (b <= 0)
  {
    cout << "Enter binary value of b: ";
    cin >> b;
    if (b > 0)
    {
      int temp = b;
      while (temp)
      {
        if (temp % 10 == 0 || temp % 10 == 1)
        {
          // b = 0; do nothing
        }
        else
        {
          b = 0;
        }
        temp = temp / 10;
      }
    }
  }
  cout << "Your entered number b is: " << b;

  cout << endl;

  cout << "a' binary is: ";
  string decToBin = "";
  while (a)
  {
    if (a % 2)
    {
      decToBin = "1" + decToBin;
    }
    else
    {
      decToBin = "0" + decToBin;
    }
    a = a / 2;
  }
  cout << decToBin << endl;

  int binToDec = 0;
  int power = 0;
  while (b > 0)
  {
    if (b % 10)
    {
      int add = 1;
      int i = 1;
      while (power >= i)
      {
        add = add * 2;
        i++;
      }
      binToDec = binToDec + add;
    }
    b = b / 10;
    power++;
  }
  cout << "Decimal value of b is: " << binToDec << endl;
}