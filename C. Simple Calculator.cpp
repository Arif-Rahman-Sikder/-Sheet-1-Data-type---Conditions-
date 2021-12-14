#include<iostream>
using namespace std;

int main ()
{
  long long x, y; //long long int data type in C++ is used to store 64-bit(8byte) integers
  cin >> x >> y;  //We take input of X and Y as (5,10).
  cout << x << " + " << y << " = " << x + y << endl; //Then we have Printed the summation and multiplication and subtraction of these X and Y numbers.
  cout << x << " * " << y << " = " << x * y << endl; //Spaces are print very carefully according to the question.
  cout << x << " - " << y << " = " << x - y << endl;
  return 0;
}
