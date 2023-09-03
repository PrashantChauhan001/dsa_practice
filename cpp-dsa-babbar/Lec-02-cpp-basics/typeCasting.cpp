#include <iostream>
using namespace std;

int main()
{
  // type casting in to the cpp

  int numChar = 'S';
  cout << numChar << " Type casted from char P to num" << endl;

  char charNum = 83;
  cout << charNum << " Type casted from num 83 to char" << endl;

  // what if more than char size num is assigned to it
  char overValue = 336;
  cout << overValue << " Type casting will reduced it to acceptable number by removing 256 bytes until it is not lower than 256 and will print ascii value of it" << endl;

  bool charToBool = "";
  cout << charToBool;
}