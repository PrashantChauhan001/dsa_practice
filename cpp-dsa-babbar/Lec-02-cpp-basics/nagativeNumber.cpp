#include <iostream>
using namespace std;

int main()
{
  // write your code here

  // how nagative number are stored
  // suppose we have to store -5
  // 1. ignore the nagative sign
  // ignore the minus sign
  // 2. find convert to binary
  // convert into the binary
  // it will be 00000000 00000000 00000000 00000101 (int will be four byte)
  // 3. find two's compliment of binary
  // how to find two's compliment for that we will find 1's compliment first
  // 3.1 replace 0 to 1 and 1 to 0 in binary
  // >> 11111111 11111111 11111111 11111010
  // 3.2 now will find two's complimentary >> add 1 into the one's compliment
  // >> 11111111 11111111 11111111 11111011
  // 4. store the binary data into the memory

  // now how to retrive nagative number
  // 1. find out that it is nagative or not
  // >> if it's first bit is 1 it is nagative
  // 2. convert than to decimal if found nagative
  // 2.1 find first's compliment of binary ex. 11111111 11111111 11111111 11111011
  // >> 00000000 00000000 00000000 00000100
  // 2.2 add one init you will get the number
  // >> 00000000 00000000 00000000 00000101 so it is -5

  // so int store signed integer range from -2^31 to 2^31 - 1
  // if you want to store only unsigned positive int use
  unsigned int number = 10;
  // it will increase the range to 0 to 2^32 - 1

  // what if you store nagative number in unsigned int
  unsigned int fackNumber = -101;

  cout << fackNumber << " it is considered positive on retrival";
}