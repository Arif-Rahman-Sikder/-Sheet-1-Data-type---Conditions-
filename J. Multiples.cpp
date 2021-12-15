#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
  int A, B;
  cin >> A >> B;
  if (A % B == 0)
    {
      cout << "Multiples\n"; // \n is used to create new line
    }
  else if (B % A == 0) // this is relational operator
    {
      cout << "Multiples\n";
    }
  else
    {
      cout << "No Multiples\n"; 
    }
    
    return 0;
}
