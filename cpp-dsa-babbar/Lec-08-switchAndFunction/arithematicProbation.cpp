#include <iostream>
using namespace std;

int aPAns(int n)
{
  return (3 * n + 7);
}

int main()
{
  int ans, n;
  cout << "Enter the number to find AP of 3n + 7: ";
  cin >> n;
  cout << endl;
  cout << "Ans is: " << aPAns(n);
} // namespace std;
