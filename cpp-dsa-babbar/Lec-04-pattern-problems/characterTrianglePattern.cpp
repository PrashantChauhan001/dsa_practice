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

  cout << endl;

  // create triangle with alphabet increase on each row start from "A"
  int i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      char character = 'A' + ((i - 1) % 26);
      cout << " "
           << character;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  cout << endl;

  // create triangle with alphabet increase continuous
  i = 1;
  int count = 0;
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      char character = 'A' + (count % 26);
      cout << " "
           << character << " ";
      count++;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  cout << endl;

  // create triangle with alphabet increase on row and continuous
  i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      char character = 'A' + ((i + j - 2) % 26);
      cout << " "
           << character << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  cout << endl;

  // create triangle with alphabet decrease on row increase last row start with A
  i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      char character = 'A' + ((num - i + j - 1) % 26);
      cout << " "
           << character << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  cout << endl;

  // write squre matrix with input column and row and fill with alphabet start with A and increase by row
  i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      char character = 'A' + i + j - 2;
      cout << " " << character << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}