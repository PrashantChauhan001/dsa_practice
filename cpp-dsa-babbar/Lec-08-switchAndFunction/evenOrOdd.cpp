#include <iostream>
using namespace std;

void isEven(int num)
{
  if (num % 2 == 0)
    cout << num << " is Even." << endl;
  else
    cout << num << " is Odd." << endl;
}

int main()
{
  int num01;
  cout << "Enter positive int to find it is even or odd: ";
  cin >> num01;
  cout << endl;
  isEven(num01);
}