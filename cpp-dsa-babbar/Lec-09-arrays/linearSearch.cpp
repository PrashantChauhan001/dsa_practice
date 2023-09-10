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

int getIndex(int searchNum, int searchArr[], int length)
{
  for (int i = 0; i < length; i++)
  {
    if (searchArr[i] == searchNum)
      return i;
  }
  return -1;
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
  int findNum = 0;
  cout << "Find index of the num: ";
  cin >> findNum;
  cout << endl;
  cout << "index is: " << (getIndex(findNum, arr, length) + 1) << endl;
}