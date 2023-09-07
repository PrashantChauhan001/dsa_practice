#include <iostream>
using namespace std;

int main()
{

  int a = 0;
  while (a <= 0)
  {
    cout << "Enter Decimal to find it's squre root in decimal: ";
    cin >> a;
  }
  cout << "Your entered number is: " << a;

  cout << endl;

  int num = 1;

  while (a >= (num * num))
  {
    num++;
  }
  num--;

  cout << "Squre root of given number in Integer is: " << num << endl;
}