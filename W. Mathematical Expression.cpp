#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, sol;
    char s, q;
    cin >> a >> s >> b >> q >> sol;
    if (s == '+' && q == '=')
    {
        (a + b == sol) ? cout << "Yes" : cout << a + b << endl;
    }
    else if (s == '-' && q == '=')
    {
        (a - b == sol) ? cout << "Yes" : cout << a - b << endl;
    }
    else if (s == '*' && q == '=')
    {
        (a * b == sol) ? cout << "Yes" : cout << a * b << endl;
    }
    return 0;
}
