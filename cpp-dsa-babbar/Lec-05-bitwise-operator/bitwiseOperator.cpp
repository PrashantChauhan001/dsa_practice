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
  cout << "Your entered number a is: " << a;

  cout << endl;

  while (b <= 0)
  {
    cout << "Enter positive integer b value: ";
    cin >> b;
  }
  cout << "Your entered number b is: " << b;

  cout << endl;

  // bitwise operator
  // AND:- &
  // OR:- |
  // NOT:- ~
  // XOR:- ^

  bitset<8> bnry_a(a);
  bitset<8> bnry_b(b);
  cout << "Binary of a " << a << " is: " << bnry_a << endl;
  cout << "Binary of b " << b << " is: " << bnry_b << endl;

  int and1 = (a & b),
      or1 = (a | b),
      nota = (~a),
      notb = (~b),
      xor1 = (a ^ b);

  bitset<8> bnry_and(and1);
  bitset<8> bnry_or(or1);
  bitset<8> bnry_nota(nota);
  bitset<8> bnry_notb(notb);
  bitset<8> bnry_xor(xor1);

  cout << (a & b) << " And a & b binary is: " << bnry_and << endl;
  cout << (a | b) << " Or a | b binary is: " << bnry_or << endl;
  cout << ~a << " not ~a binary is: " << bnry_nota << endl;
  cout << ~b << " not ~b binary is: " << bnry_notb << endl;
  cout << (a ^ b) << " xor a ^ b binary is: " << bnry_xor << endl;
}