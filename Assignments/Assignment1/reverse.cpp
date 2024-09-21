#include <iostream>
using namespace std;
int main() {
 int r, reverse, remainder;
 cout << "Enter a 5 digit number: ";
 cin >> r;
 while(r != 0) {
 remainder = r % 10;
 reverse= reverse * 10 + remainder;
 r /= 10; }
 cout << "Reversed Number = " << reverse;}