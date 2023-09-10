#include <iostream>
using namespace std;

void getArr(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    arr[i] = rand();
  }
}

void printArr(int arr[], int len)
{
  cout << endl
       << "--------------------------------------" << endl;
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl
       << "--------------------------------------" << endl;
}

void swapAlt(int arr[], int length)
{
  for (int i = 0; i < length - 1; i += 2)
  {
    swap(arr[i], arr[i + 1]);
  }
}

int main()
{

  // create random array (max 1000)
  int length;
  cout << "enter the length of the array: ";
  cin >> length;
  cout << endl;
  int arr[1000];
  getArr(arr, length);
  printArr(arr, length);
  swapAlt(arr, length);
  cout << "Alternate swapped arr: " << endl;
  printArr(arr, length);
}