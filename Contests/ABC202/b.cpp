#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '6')
            s[i] = '9';
        else if (s[i] == '9')
            s[i] = '6';
    }
    cout << s;
    return 0;
}