#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s == '<')
    {
        (a < b) ? cout << "Right" : cout << "Wrong" << endl;
    }
    else if (s == '>')
    {
        (a > b) ? cout << "Right" : cout << "Wrong" << endl;
    }
    else if (s == '=')
    {
        (a == b) ? cout << "Right" : cout << "Wrong" << endl;
    }
    return 0;
}
