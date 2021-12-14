#include<iostream>
using namespace std;
int main ()
{
  int A;         //int: As the name suggests, an int variable is used to store an integer.        
  long long B;   //long long:This is used when we want to deal with some large value of integers.
  char ch;       //char:a char keyword is used to declare character type variables. ... A character variable can store only a single character.
  float F;       //float: It is used to store decimal numbers (numbers with floating point value) with single precision.
  double D;      //double: It is used to store decimal numbers (numbers with floating point value) with double precision.
  cin >> A >> B >> ch >> F >> D;    //Taking input from user to print required data types
  cout << A << endl << B << endl << ch << endl << F << endl << D << endl;  //Printing required output using (endl) function to insert a new line character
  return 0;
}

