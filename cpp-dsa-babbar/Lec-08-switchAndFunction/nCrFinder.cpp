#include <iostream>
using namespace std;

int factorial(int n)
{
  int i = 1;
  int ans = 1;
  while (n >= i)
  {
    ans = ans * i;
    i++;
  }
  return ans;
}

int nCR(int n, int r)
{
  return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int main()
{
  int n, r;
  cout << "Enter the member of the set: ";
  cin >> n;
  cout << endl
       << "Enter the number of selection from the set: ";
  cin >> r;
  cout << endl;

  cout << "The combination of the selection is: " << nCR(n, r) << endl;
}