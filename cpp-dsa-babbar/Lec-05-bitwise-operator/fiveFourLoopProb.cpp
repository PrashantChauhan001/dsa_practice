#include <iostream>
using namespace std;

int main()
{
  // 1. first prob
  for (int i = 0; i <= 5; i++)
  {
    cout << i << " ";
    i++;
  }

  cout << endl
       << endl;

  // 2. first prob
  // for (int i = 0; i <= 5; i--)
  // {
  //   cout << i << " ";
  //   i++;
  // }

  // cout << endl
  //      << endl;

  // 3. third one
  for (int i = 0; i <= 15; i += 2)
  {
    cout << i << " ";

    if (i & 1)
    {
      continue;
    }

    i++;
  }

  cout << endl
       << endl;
  // 4. fouth one
  for (int i = 0; i < 5; i += 2)
  {
    for (int j = 0; j <= 5; j++)
    {
      if (i + j == 10)
      {
        break;
      }
      cout << i << " " << j << endl;
    }
  }

  cout << endl
       << endl;
}