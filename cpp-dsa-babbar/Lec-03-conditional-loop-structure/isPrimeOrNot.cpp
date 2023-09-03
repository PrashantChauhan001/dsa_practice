#include <iostream>
using namespace std;

int main()
{
  // TC: O(n)
  // int num = 0;
  // while (num <= 0)
  // {
  //   cout << "Enter positive integer to check it is prime number or not: ";
  //   cin >> num;
  // }
  // int i = 2;
  // while (i < num)
  // {
  //   /* code */
  //   if (num % i == 0)
  //   {
  //     cout << "\nYour entered number " << num << " is not a prime number";
  //     return 0;
  //   }
  //   i = i + 1;
  // }
  // cout << "\nYour entered number " << num << " is prime number";

  // optimization
  // finding nearest int squre root

  // TC: O(n ^ (1/2))

  int num = 0;
  while (num <= 0)
  {
    cout << "Enter positive integer to check it is prime number or not: ";
    cin >> num;
  }
  int i = 2;
  int j = 1;
  while (j * j <= num)
  {
    j = j + 1;
  }
  j = j - 1;

  cout << "Count of the max loop is: " << j;

  while (i < j)
  {
    /* code */
    if (num % i == 0)
    {
      cout << "\nYour entered number " << num << " is not a prime number";
      return 0;
    }
    i = i + 1;
  }
  cout << "\nYour entered number " << num << " is prime number";
}