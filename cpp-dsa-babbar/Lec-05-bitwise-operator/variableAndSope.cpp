#include <iostream>
using namespace std;

int main()
{
  // for (int i = 0; i < 15; i++)
  // {
  // }
  int dummy;
  // will not console undefine will console assigned value by compilar value depend on compiler
  cout << dummy << endl;

  // we can't create two same named variable in single scope
  // we have to create block wise variable if want to use same name for multiple variable
  // child scope variable priority will be higher than parent
  // if child scope has no variable declare if using than it goes to the parent

  int a1 = 5;
  // int a1 = 8; // can't do that
  int a2 = 9;

  if (true)
  {
    int a1 = 12;
    cout << a1 << " a1 value will as per the current scope" << endl;
    cout << a2 << " a2 value will as per the parent scope" << endl;
  }
}