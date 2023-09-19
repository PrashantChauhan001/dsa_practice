// stl stands for standard templet library

#include <iostream>

#include <array> // array lib

using namespace std;
int main()
{

  int basic[100] = {1, 3, 4, 5, 6, 7, 7};

  array<int, 100> newArr = {1, 2, 4, 5, 3, 5, 3, 567, 8, 8, 4, 3};

  int size = newArr.size();

  for (int i = 0; i < size; i++)
  {
    cout << newArr[i] << " ";
  }

  array<int, 0> emptii = {};

  cout << endl;

  cout << "Ele at 5th index--> " << newArr.at(5) << endl;
  cout << "Empty or not--> " << emptii.empty() << endl;
  cout << "First Element--> " << newArr.front() << endl;
  cout << "Last element--> " << newArr.back() << endl;
}