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
  // create inverse triangle with right angle face to the right with number increase by row
  int i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      if (num - j + 1 <= num - i + 1)
      {
        cout << " " << i << " ";
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
  // create triangle with right angle face to the right with number increase by row
  i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      if (num - i + 1 <= j)
      {
        cout << " " << i << " ";
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
  // create inverse triangle with right angle face to the right with number increase by row
  i = 1;
  int count = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      if (num - i + 1 >= num - j + 1)
      {
        cout << " " << count << " ";
        count++;
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
  // create triangle with right angle face to the right with number increase continuous
  i = 1;
  count = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      if (num - i + 1 <= j)
      {
        cout << " " << count << " ";
        count++;
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