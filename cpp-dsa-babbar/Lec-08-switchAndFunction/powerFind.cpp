#include <iostream>
using namespace std;

int power()
{
  int a, b;
  cout << "enter the number a and it's power b to find value: ";
  cin >> a >> b;
  cout << endl;
  int ans = 1;
  while (b >= 1)
  {
    ans = ans * a;
    b--;
  }
  return ans;
}

int main()
{
  int ans = power();
  cout << "Ans is: " << ans;
}