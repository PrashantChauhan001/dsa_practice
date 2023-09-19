#include <iostream>
#include <bits/stdc++.h>
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

int binarySearch(int arr[], int length, int element)
{
  // start first and end and find middle
  int first = 0, last = length;
  while (first < last)
  {
    // int middle = (first + last) / 2; // here first + last can be out of the int range
    // so alt sol
    int middle = first + ((last - first) / 2);
    if (element == arr[middle])
      return middle;
    if (element > arr[middle])
    {
      first = middle + 1;
    }
    else if (element < arr[middle])
    {
      last = middle;
    }
  }
  return -1;
}

int main()
{
  int length;
  cout << "enter the length of the array: ";
  cin >> length;
  cout << endl;
  int arr[1000];
  getArr(arr, length);
  printArr(arr, length);
  sort(arr, arr + length);
  printArr(arr, length);
  cout << endl
       << "Enter the element of to array to find place: ";
  int element;
  cin >> element;
  cout << endl;
  int ans = binarySearch(arr, length, element);
  if (ans + 1)
    cout << "Index of the element is: " << ans + 1 << endl;
  else
    cout << "Element not found into the array" << endl;
}
