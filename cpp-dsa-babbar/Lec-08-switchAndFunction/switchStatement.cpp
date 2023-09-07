#include <iostream>
using namespace std;

int main()
{
  // syntaxt of switch case
  // switch (expression)
  // {
  // case /* constant-expression */:
  //   /* code */
  //   break;

  // default:
  //   break;
  // }
  int a = 1;
  char b = '1';
  switch (a)
  {
  case 1:
    cout << "given input is number 1" << endl;
    break; // break is used to stop below code execution and exit the switch case
  case '1':
    cout << "given input is string 1" << endl;
    break;

  default: // default is for no condition match this will executed but it is not compulsary
    cout << "default case" << endl;
    break;
  }

  // HW: how to exit from the infinite loop with no use of any key work in infinite child only can add inside the switch case which will be in the loop block
  while (true)
  {
    cout << "into the loop" << endl;
    switch (2)
    {
    case 1:
      cout << "we are going to use continue in this if it is valid?" << endl;
      continue; // it will work as break; in case of the switch statement

    case 2:
      cout << "checking working of continue" << endl;

    default:
      // what to do here to exit this loop
      // exit(0); // use this func to exit it is a hint
      exit(1);
      break;
    }
  }
}