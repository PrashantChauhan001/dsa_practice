#include <iostream>
using namespace std;

int main()
{

  //  check if input number is positive, negative or zero.
  // int a, b;
  // cout << "Please enter integer A to check it is positive, negative or zero\n";
  // cin >> a >> b;
  // if (a > 0)
  // {
  //   cout << a << " is positive number";
  // }
  // else if (a < 0)
  // {
  //   cout << a << " is negative number";
  // }
  // else
  // {
  //   cout << a << " is zero";
  // }
  // cin >> a >> b; // cin will ignore space, tab and enter
  // a = cin.get(); // cin.get() take any value as input like space, tab and enter
  // b = cin.get();
  // cout << "\nValue of a and b is: " << a << " and " << b;

  // // tricky output question

  // // 1ST QUESTION
  // int a1 = 9;
  // if (a1 == 9)
  // {
  //   cout << "NINEY";
  // }
  // if (a1 > 0)
  // {
  //   cout << "POSITIVE";
  // }
  // else
  // {
  //   cout << "NEGATIVE";
  // }

  // // 2nd QUESTION

  // int a = 2;
  // int b = a + 1;
  // if ((a = 3) == b)
  // {
  //   cout << "in if block";
  //   cout << a;
  // }
  // else
  // {
  //   cout << a + 1;
  // }

  // take text input and print if it is lower case or upper case or numeric
  int a;
  cout << "Enter any character you like: ";
  a = cin.get();
  cout << "Given input character ascii value is " << a;
  cout << "\n";
  if (a >= 48 && a <= 57)
  {
    cout << "Given input is Numeric charecter";
  }
  else if (a >= 65 && a <= 90)
  {
    cout << "Given input is Uppercase alphabet";
  }
  else if (a >= 97 && a <= 122)
  {
    cout << "Given input is Lowercase alphabet";
  }
  else
  {
    cout << "Given input is not alphanumeric character";
  }
}