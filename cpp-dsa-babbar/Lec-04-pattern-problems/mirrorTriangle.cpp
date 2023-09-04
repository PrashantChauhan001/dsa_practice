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

  // create a triangle right angle face on right side
  int i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      if (num - i < j)
      {
        cout << " * ";
      }
      else
      {
        cout << "   ";
      }
      j++;
    }
    cout << endl;
    i++;
  }

  cout << endl;
  // create inverse right triangle right angle face to the left
  i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      if (num - i + 1 >= j)
      {
        cout << " * ";
      }
      else
      {
        cout << "   ";
      }
      j++;
    }
    cout << endl;
    i++;
  }

  cout << endl;
  // create inverse triangle with right angle face to the right
  i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      if (num - j + 1 <= num - i + 1)
      {
        cout << " * ";
      }
      else
      {
        cout << "   ";
      }
      j++;
    }
    cout << endl;
    i++;
  }
}