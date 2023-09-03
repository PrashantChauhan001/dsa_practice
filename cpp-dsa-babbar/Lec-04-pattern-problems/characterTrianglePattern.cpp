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

  // create triangle with alphabet increase on each row start from "A"
  int i = 1;
  while (i <= num)
  {
    int j = 1;
    while (j <= i)
    {
      cout << " "
           << "A" + i << " ";
      j = j + 1;
    }
    i = i + 1;
  }
}