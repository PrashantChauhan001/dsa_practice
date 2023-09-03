#include <iostream>
using namespace std;

int main()
{
  // print 0 to given input by user one by one
  int num = 0;
  while (num <= 0)
  {
    cout << "Enter Positive Integer:\n";
    cin >> num;
  }
  int i = 0;
  while (i <= num)
  {
    cout << i << "  ";
    i = i + 1;
  }

  // get sum from entered number upto zero
  i = 0;
  int sum = 0;
  while (i <= num)
  {
    sum = sum + i;
    i = i + 1;
  }
  cout << "\nSum of numbers from " << num << " upto 0 is: " << sum;

  // get sum of all even number lower from entered number upto zero.
  i = 0;
  sum = 0;
  while (i <= num)
  {
    sum = sum + i;
    i = i + 2;
  }
  cout << "\nSum of all even numbers below " << num << " is: " << sum;

  // fahrenheit to celcius converter
  float fahrenTemp;
  cout << "\nEnter temperature into the fahrenheit: ";
  cin >> fahrenTemp;
  float celcTemp;
  float divider = 9.0 / 5.0;
  cout << "\n"
       << (fahrenTemp - 32) << " minus\n"
       << divider << " divide\n";
  celcTemp = ((fahrenTemp - 32) / divider);
  cout << "Temperature in celcius is: " << celcTemp;
}