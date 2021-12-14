#include<iostream>
using namespace std;
int main ()
{
  long long int N, M, X, Y;

  cin >> N >> M;

  X = (N % 10);
  Y = (M % 10); //% is known as modulus operator

  cout << X + Y << endl;
  
  return 0;
}
