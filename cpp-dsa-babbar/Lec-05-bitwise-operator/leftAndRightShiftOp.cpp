#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 0, b = 0;
  while (a <= 0)
  {
    cout << "Enter positive integer a value: ";
    cin >> a;
  }

  while (b <= 0)
  {
    cout << "Enter positive integer b value: ";
    cin >> b;
  }
  cout << "Your entered number b is: " << b;

  cout << endl;

  // left shift (<<) and right shift (>>) operator
  // left shift << operator move the binary to the left by given places :- generaly gets by multiply by 2 except the number is greater than (2^x) - 1, where (x + shift) > 31
  // right shift << operator move the binary to the right by given places :- generaly gets by divide by 2

  bitset<32> binary_a(a);
  bitset<32> binary_b(b);

  int ls_a = (a << 1);
  int rs_a = (a >> 1);
  int ls_b = (b << 1);
  int rs_b = (b >> 1);

  bitset<32> binary_ls_a(ls_a);
  bitset<32> binary_ls_b(ls_b);
  bitset<32> binary_rs_a(rs_a);
  bitset<32> binary_rs_b(rs_b);

  cout << "Your entered number a is: " << a << endl;
  cout << "Your entered number a's binary is: " << binary_a << endl;
  cout << "Left shift of a is: " << ls_a << endl;
  cout << "Left shift binary of a is: " << binary_ls_a << endl;
  cout << "Right shift of a is: " << rs_a << endl;
  cout << "Right shift binary of a is: " << binary_rs_a << endl;
  cout << endl;
  // cout << "Your entered number b is: " << b << endl;
  // cout << "Your entered number b's binary is: " << binary_b << endl;
  // cout << "Left shift of b is: " << ls_b << endl;
  // cout << "Left shift binary of b is: " << binary_ls_b << endl;
  // cout << "Right shift of b is: " << rs_b << endl;
  // cout << "Right shift binary of b is: " << binary_rs_b << endl;
  // cout << endl;

  // increment += and decrement -=
  // post increment x++ // pre increment ++x
  // post decrement x-- // pre decrement --x

  cout << "Current a value: " << a << endl;
  cout << "Post increment a++: " << a++ << endl;
  cout << "Current a value: " << a << endl;
  cout << "Pre increment ++a: " << ++a << endl;
  cout << "Current a value: " << a << endl;
  cout << "Post decrement a--: " << a-- << endl;
  cout << "Current a value: " << a << endl;
  cout << "Pre decrement --a: " << --a << endl;
  cout << "Current a value: " << a << endl;

  // increment assginment
  cout << endl;
  cout << "Current a value: " << a << endl;
  cout << "Current b value: " << b << endl;
  a += b;
  cout << "Increment assignment a+=b: " << a << endl;

  // decrement assignment
  cout << endl;
  cout << "Current a value: " << a << endl;
  cout << "Current b value: " << b << endl;
  a -= b;
  cout << "Increment assignment a-=b: " << a << endl;
}