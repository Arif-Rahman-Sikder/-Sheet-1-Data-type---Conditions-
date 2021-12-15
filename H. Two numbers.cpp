#include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  float A, B, C, D, E, F;
  cin >> A >> B;
  C = A / B;
  D = floor (C); 
  E = ceil (C); //this are function
  F = round (C);
  cout << setprecision (0) << fixed << "floor " << A << " / " << B << " = " <<
    D << endl;
  cout << setprecision (0) << fixed << "ceil " << A << " / " << B << " = " <<
    E << endl;
  cout << setprecision (0) << fixed << "round " << A << " / " << B << " = " <<
    F << endl;
  return 0;
}
