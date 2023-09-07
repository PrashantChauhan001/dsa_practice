#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter the value of a: ";
  cin >> a;

  cout << endl
       << "Enter the value of b: ";
  cin >> b;

  char operation;
  cout << endl
       << "Enter the operation: ";
  cin >> operation;
  cout << endl;

  switch (operation)
  {
  case '+':
  {
    cout << a + b << endl;
    break;
  }
  case '-':
    cout << a - b << endl;
    break;
  case '*':
    cout << a * b << endl;
    break;
  case '/':
    cout << a / b << endl;
    break;
  case '%':
    cout << a % b << endl;
    break;
  default:
    cout << "Enter the valid operator value." << endl;
    break;
  }
}