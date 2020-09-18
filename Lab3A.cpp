/*
Class: CSE 1321L
Section: W04
Term: Fall '20
Instructor: Deeksha Koya
Name: Michael Lozen
Lab#: 3A
*/
#include <iostream>
using namespace std;
int main() {
  float owed, apr;
  cout << "Amount owed: $";
  cin >> owed;
  cout << "APR: ";
  cin >> apr;
  cout << "Monthly percentage rate: " << apr/12 << endl;
  cout << "Minimum payment: $" << owed*apr/1200 << endl;
}