#include <iostream>
using namespace std;

bool isUnique(int num, int arr[], int len)
{
  int occure = 0;
  for (int i = 0; i < len; i++)
  {
    if (num == arr[i])
      occure++;
  }
  if (occure > 1)
    return false;
  return true;
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

  cout << endl
       << "The unique element of the array: ";
  for (int i = 0; i < arrLength; i++)
  {
    if (isUnique(arr[i], arr, arrLength))
    {
      cout << arr[i] << " ";
    }
  }

  cout << endl;

  cout << endl
       << "The duplicate element of the array: ";
  for (int i = 0; i < arrLength; i++)
  {
    if (!isUnique(arr[i], arr, arrLength))
    {
      cout << arr[i] << " ";
    }
  }

  cout << endl;

} // namespace std;
