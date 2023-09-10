#include <iostream>
using namespace std;

int maxNum(int arr[], int length)
{
  int maxi = INT_MIN;

  for (int i = 0; i < length; i++)
  {
    maxi = max(maxi, arr[i]);
    // or
    // if (arr[i] > max)
    // {
    //   max = arr[i];
    // }
  }
  return maxi;
}

int minNum(int arr[], int length)
{
  int mini = INT_MAX;

  for (int i = 0; i < length; i++)
  {
    mini = min(mini, arr[i]);
    // or
    // if (arr[i] < mini)
    // {
    //   mini = arr[i];
    // }
  }
  return mini;
}

int getSum(int arr[], int length)
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int arr[100];
  int arrLength = 0;
  cout << "Enter the length of the array: ";
  cin >> arrLength;
  cout << endl;
  cout << "Enter the element of the array: ";
  for (int k = 0; k < arrLength; k++)
  {
    cin >> arr[k];
  }

  cout << "Max num is: " << maxNum(arr, arrLength) << endl;
  cout << "Min num is: " << minNum(arr, arrLength) << endl;
  cout << "Sum of array is: " << getSum(arr, arrLength) << endl;

} // namespace std;
