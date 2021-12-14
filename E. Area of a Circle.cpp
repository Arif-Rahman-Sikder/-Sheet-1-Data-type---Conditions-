#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
  float R;

  cin >> R;

  double area; //double is used because of its precision

  area = (3.141592653 * R * R);

  cout << fixed;
  cout << setprecision (9) << area << endl; // setprecision is used to print preferred digits after decimal

  return 0;
}
