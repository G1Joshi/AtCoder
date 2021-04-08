#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string s, t = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
            break;
        t += s[i];
    }
    cout << t;
    return 0;
}