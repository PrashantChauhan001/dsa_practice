#include <iostream>
using namespace std;

int countOfSetBit(int n)
{
  int count = 0;
  while (n > 0)
  {
    if (n & 1)
      count++;
    n = n >> 1;
  }
  return count;
}

int main()
{
  int a, b;
  cout << "Enter the int a and b to find total set bits: ";
  cin >> a >> b;
  cout << endl;

  cout << "Total set bit count is: " << (countOfSetBit(a) + countOfSetBit(b)) << endl;
}