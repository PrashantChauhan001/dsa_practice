#include <iostream>
#include <array>

using namespace std;

void printArr(int arr[], int len)
{
  int i = 0;
  while (i < len)
  {
    cout << arr[i] << " ";
    i++;
  }
  cout << endl;
}

void printArr2(array<int, 5> arr)
{
  int i = 0;
  while (i < 5)
  {
    cout << arr[i] << " ";
    i++;
  }
  cout << endl;
}

int main()
{
  // c-style declaration
  int cStyleArr[40] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  printArr(cStyleArr, 40);
  cout << endl;

  // stl array
  array<int, 30> contStlArr = {1, 2, 3, 5, 4, 6, 3, 6, 7, 89, 0, 9};

  contStlArr[29] = 574;

  // methods of the array containers

  // 1. at() :- return array element
  cout << contStlArr.at(5) << " at() return the element at the given position" << endl;

  // 2. get() :- return array element same as at()
  cout << get<6>(contStlArr) << " get<place>(arr) return the element at the given position" << endl;

  // 3. operator [] :- return array element same as at()
  cout << (contStlArr[7]) << " get<place>(arr) return the element at the given position" << endl;

  // 4. front() :- return first element of the array
  cout << contStlArr.front() << " front() :- return first element of the array" << endl;

  // 5. back() :- return last element of the array
  cout << contStlArr.back() << " back() :- return last element of the array" << endl;

  // 6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack.
  cout << contStlArr.size() << " size() :- It returns the number of elements in array. This is a property that C-style arrays lack" << endl;
  // 7. max_size() :- It returns the maximum number of elements array can hold i.e, the size with which array is declared. The size() and max_size() return the same value.
  cout << contStlArr.max_size() << " max_size() :- It returns the maximum number of elements array can hold i.e, the size with which array is declared. The size() and max_size() return the same value. " << endl;

  // 8. swap() :- swap() replace all element of the one array with another
  array<int, 5> arrSwp01 = {1, 5, 3, 6, 4};
  array<int, 5> arrSwp02 = {1, 3, 7, 4, 3};

  arrSwp01.swap(arrSwp02);

  printArr2(arrSwp01);

  // 9. empty() :- return true if array is empty
  array<int, 0> empArr = {};
  cout << arrSwp01.empty() << " empty() :- return false if array size is not zero" << endl;
  cout << empArr.empty() << " empty() :- return true if array size is zero" << endl;

  // 10. fill() :- fill array with given value
  array<int, 5> fillArr = {};
  fillArr.fill(12);

  printArr2(fillArr);
  cout << " fill() :- fill array with given value" << endl;
}