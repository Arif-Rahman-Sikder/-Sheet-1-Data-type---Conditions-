#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a;
  float b, c;
  cin >> b;
  a = b;
  c = b - a;
  if (c != 0)
    {
      cout << "float " << a << " " << setprecision (3) << fixed << c << endl;
    }
  else
    cout << "int " << b << endl;
  return 0;
}
