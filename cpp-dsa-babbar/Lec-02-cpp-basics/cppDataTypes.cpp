#include <iostream>
using namespace std;

int main()
{

  // variable declaration rule for the c++
  // - C++ variable can contains one to 255 character
  // - All variable name must start with the alphabets or underscore
  // - Variable names are case sensitive.
  // - No spaces or special characters are allowed.
  // - you cannot use a C++ keyword (a reserved word) as a variable name.

  int number = 5;               // will alocate 4 byte memory to the variable
  char character = 'P';         // 1 byte use single quote and single character will be store
  bool boolean = true;          // 1 byte memory true is 1 and flase is 0
  float floatingNumber = 1.25;  // 4 byte
  double alsoFloatNumer = 1.24; // 8 byte

  cout << "Size of int var is: " << sizeof(number) << endl;
  cout << "Size of char character is: " << sizeof(character) << endl;
  cout << "Size of bool boolean is: " << sizeof(boolean) << endl;
  cout << "Size of float floatingNumber is: " << sizeof(floatingNumber) << endl;
  cout << "Size of double alsoFloatNumber is: " << sizeof(alsoFloatNumer) << endl;
}
