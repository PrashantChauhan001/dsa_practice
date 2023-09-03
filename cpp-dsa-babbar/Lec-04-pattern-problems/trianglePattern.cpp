#include <iostream>
using namespace std;

int main()
{
  int num = 0;
  while (num <= 0)
  {
    cout << "Enter positive integer to create matrix of it's size: ";
    cin >> num;
  }
  cout << "Your entered number is: " << num;
  int i = 1;
  cout << "\n";

  // make triangle with *
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      cout << " * ";
      j = j + 1;
    }

    cout << endl;
    i = i + 1;
  }

  cout << "\n";
  i = 1;
  // make triangle with row number
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      cout << " " << i << " ";
      j = j + 1;
    }

    cout << endl;
    i = i + 1;
  }

  cout << "\n";
  i = 1;
  // make triangle with continuous number
  int count = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      cout << " " << count << " ";
      j = j + 1;
      count = count + 1;
    }

    cout << endl;
    i = i + 1;
  }

  cout << "\n";
  i = 1;
  // make triangle with first row number should be row index
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      cout << " " << i + j - 1 << " ";
      j = j + 1;
    }

    cout << endl;
    i = i + 1;
  }

  cout << "\n";
  i = 1;
  // make triangle with first row number should be row index and decrease count
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      cout << " " << i - j + 1 << " ";
      j = j + 1;
    }

    cout << endl;
    i = i + 1;
  }
}