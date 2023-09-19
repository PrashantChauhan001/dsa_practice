#include <iostream>
#include <vector>

using namespace std;
int main()
{

  vector<int> vec01;
  cout << "Capacity--> " << vec01.capacity() << endl;

  vec01.push_back(2);
  cout << "Capacity--> " << vec01.capacity() << endl;

  vec01.push_back(3);
  cout << "Capacity--> " << vec01.capacity() << endl;

  vec01.push_back(5);
  cout << "Capacity--> " << vec01.capacity() << endl;

  vec01.push_back(6);
  cout << "Capacity--> " << vec01.capacity() << endl;

  vec01.push_back(7);
  cout << "Capacity--> " << vec01.capacity() << endl;

  vec01.push_back(7);
  cout << "Size--> " << vec01.size() << endl;

  cout << "First Element--> " << vec01.front() << endl;
  cout << "Last element--> " << vec01.back() << endl;

  vec01.push_back(9);

  for (int i : vec01)
  {
    cout << i << " ";
  }

  cout << endl;

  vec01.pop_back();

  for (int i : vec01)
  {
    cout << i << " ";
  }
}
