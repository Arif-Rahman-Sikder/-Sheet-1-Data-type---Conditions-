#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int newnum1 = a % 100;
	int newnum2 = b % 100;
	int newnum3 = c % 100;
	int newnum4 = d % 100;
	int result{ newnum1 * newnum2 * newnum3 * newnum4 };
	if (result % 100 <= 9) {
		cout << "0" << result % 100 << endl;
	}
	else {
		cout << result % 100 << endl;
	}
  result 0;
}
