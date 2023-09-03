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
  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      cout << " * ";
      j = j + 1;
    }
    cout << "\n";
    i = i + 1;
  }
}