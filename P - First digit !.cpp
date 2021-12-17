#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () 
{
  int X, i, k;
  cin >> X;
  if (X > 999 && X <= 9999)
    {
      k = X / 1000; //The input is being divided by 1000 to know either the first number is ODD or EVEN 
    }     
if (k % 2 == 0)
	{
	  cout << "EVEN\n";
	}
      else
	{
	  cout << "ODD\n";
	}
      return 0;
    
}

//2nd method
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main () 
{
  
int X, i, k;
  
cin >> X;
  
if (X > 999 && X <= 9999)
    
    {
      
k = X / 1000; //The input is being divided by 1000 to know either the first number is ODD or EVEN 

         
(k % 2 == 0) ? cout << "EVEN\n" : cout << "ODD\n";
}

return 0;
    
}
