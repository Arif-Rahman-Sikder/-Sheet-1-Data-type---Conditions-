#include<iostream>
using namespace std;
int main ()
{
  int n, y, m, d, A;
  cin >> n;
  A = (n % 365);
  y = (n / 365);
  m = (A / 30);
  d = (A % 30);
  cout << y << " years" << endl;
  cout << m << " months" << endl;
  cout << d << " days" << endl;


  return 0;
}
