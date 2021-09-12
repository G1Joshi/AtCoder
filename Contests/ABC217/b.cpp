#include <iostream>
#include <algorithm>
using namespace std;

string quiz(string *s, string *t)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        if (s[i] != t[i])
            return t[i];
    }
    return t[i];
}

int main()
{
    string t[4] = {"ABC", "AGC", "AHC", "ARC"};
    string s[3];
    for (int i = 0; i < 3; i++)
        cin >> s[i];
    sort(s, s + 3);
    cout << quiz(s, t);
    return 0;
}