#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b < c || a > d)
        cout << "-1";
    else
        cout << max(a, c) << " " << min(b, d);
    return 0;
}
