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

  // increment number row wise
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      cout << " " << i << " ";
      j = j + 1;
    }
    cout << "\n";
    i = i + 1;
  }
  cout << "\n";
  i = 1;

  // increment number column wise
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      cout << " " << j << " ";
      j = j + 1;
    }
    cout << "\n";
    i = i + 1;
  }

  cout << "\n";
  // increment number column wise reverse
  i = 1;
  while (i <= num)
  {
    int j = num;
    while (j >= 1)
    {
      cout << " " << j << " ";
      j = j - 1;
    }
    cout << "\n";
    i = i + 1;
  }

  cout << "\n";
  // increment number column wise reverse with j = 1
  i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      cout << " " << num - j + 1 << " ";
      j = j + 1;
    }
    cout << "\n";
    i = i + 1;
  }

  cout << "\n";
  // increment number into the whole matrix
  i = 1;
  int count = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      cout << " " << count << " ";
      j = j + 1;
      count = count + 1;
    }
    cout << "\n";
    i = i + 1;
  }
}