#include <iostream>
using namespace std;

void printArray(int arr[], int length)
{
  int i = 0;
  while (i < length)
  {
    cout << arr[i] << endl;
    i++;
  }
}

int main()
{
  int arr[10];
  int i = 0;
  printArray(arr, 10);

  cout << "--------------------------------------" << endl;

  int arr01[5] = {0, 1, 2, 3, 4};
  printArray(arr01, 5);

  cout << "--------------------------------------" << endl;

  int arr02[5] = {0};
  printArray(arr02, 5);

  cout << "--------------------------------------" << endl;

  int arr03[5] = {1};
  printArray(arr03, 5);

  cout << "--------------------------------------" << endl;

  int arr04[10] = {1};
  printArray(arr04, 10);

  cout << "--------------------------------------" << endl;

  int arr05[10];
  int j = 0;
  while (j < 10)
  {
    arr05[j] = j * 2;
    j++;
  }

  printArray(arr05, 10);

  // cout << "--------------------------------------" << endl;

  // designated init
  // int arr06[20] = {[0 ... 9] = 1, [10 ... 19] = 2 = 3}; // this is for the advance compiler
  // http://gcc.gnu.org/onlinedocs/gcc/Designated-Inits.html << for the reference

  // printArray(arr06, 20);

  cout << "--------------------------------------" << endl;

  int arr07[10];
  fill_n(arr07, 10, 2);

  printArray(arr07, 10);
}