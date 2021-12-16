#include<bits/stdc++.h>
using namespace std;
int main ()
{
  string F1, S1, F2, S2;
  cin >> F1 >> S1;
  cin >> F2 >> S2;

  if (S1 == S2) //equal operator
    {

      cout << "ARE Brothers" << endl;
    }
  if (S1 != S2) //not equal operator
    {

      cout << "NOT" << endl;
    }


  return 0;
}
