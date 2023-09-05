#include <iostream>
using namespace std;

int main()
{

  int a = 0, b = 0, c = 0;
  while (a <= 0)
  {
    cout << "Enter positive integer a to get fibonnaci num upto that place: ";
    cin >> a;
  }
  cout << "Your entered number a is: " << a;

  cout << endl;

  int prev = 0, curr = 1, next;
  cout << "0 1";

  for (int i = 3; i <= a; i++)
  {
    next = curr + prev;
    cout << " " << next;
    prev = curr;
    curr = next;
  }

  cout << endl;
}