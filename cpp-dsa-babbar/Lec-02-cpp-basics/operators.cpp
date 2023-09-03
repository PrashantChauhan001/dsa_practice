#include <iostream>
using namespace std;

int main()
{
  // Mathematical operator
  // +, -, *, /
  int x = 10, y = 20, z;
  cout << "x + y = " << x + y;
  cout << "\nx - y = " << x - y;
  cout << "\nx * y = " << x * y;
  cout << "\nx / y = " << x / y; // why 0 it should be 0.5
  // because we use int
  float x2 = 10, y2 = 20;
  cout << "\nx / y = " << x2 / y2;

  // relational operator
  // ==, >, <, >=, <=, !=
  bool bool001 = x == y;
  bool bool002 = x < y;
  bool bool003 = x > y;
  bool bool004 = x <= y;
  bool bool005 = x >= y;
  bool bool006 = x != y;
  cout << "\nx is equal to y: " << bool001;
  cout << "\nx is less than than y: " << bool002;
  cout << "\nx is greater than  y: " << bool003;
  cout << "\nx is less than or equal to y: " << bool004;
  cout << "\nx is greater than or equal to y: " << bool005;
  cout << "\nx is not equal to y: " << bool006;

  // logical operator
  // &&, ||, !
  cout << "\n&& return true if both condition meet " << (bool001 && bool002);
  cout << "\n|| return true if only one condition meet " << (bool001 || bool002);
  cout << "\nconvert true into false and false into true " << !bool001;

  // bitwise operator
}