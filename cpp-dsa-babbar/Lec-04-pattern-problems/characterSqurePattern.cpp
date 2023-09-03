#include <iostream>
using namespace std;

int main()
{
  int num = 0;
  while (num <= 0)
  {
    cout << "Enter positive integer to create pattern of it's size: ";
    cin >> num;
  }
  cout << "Your entered number is: " << num;

  int i = 1;
  cout << "\n";
  // create squre pattern with increase alphabet on row start from 'A'
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      char character = 'A' + i - 1;
      cout << " " << character;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  i = 1;
  cout << "\n";
  // create squre pattern with increase alphabet on column start from 'A'
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      char character = 'A' + j - 1;
      cout << " " << character;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  i = 1;
  cout << "\n";
  // create squre pattern with continuous increase alphabet
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      char character = 'A' + ((i - 1) * num) + j - 1;
      cout << " " << character;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  i = 1;
  cout << "\n";
  // create squre pattern with start from row index character
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      char character = 'A' + i + j - 2;
      cout << " " << character;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}