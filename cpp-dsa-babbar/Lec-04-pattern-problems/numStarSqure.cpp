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

  int i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      if (num - i + 1 >= j)
      {
        cout << " " << j << " ";
      }
      else
      {
        cout << " * ";
      }
      j++;
    }

    j = 1;
    while (j <= num)
    {
      if (i <= j)
      {
        cout << " " << num - j + 1 << " ";
      }
      else
      {
        cout << " * ";
      }
      j++;
    }

    cout << endl;
    i++;
  }
}