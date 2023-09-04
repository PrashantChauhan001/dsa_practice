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
    while (j <= num - 1)
    {
      if (num - i < j)
      {
        cout << " " << num - j << " ";
      }
      else
      {
        cout << "   ";
      }
      j++;
    }

    cout << " "
         << i
         << " ";

    j = 1;
    while (j <= num - 1)
    {
      if (j < i)
      {
        cout << " " << j << " ";
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