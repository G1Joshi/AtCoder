#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s[0] == s[1] && s[1] == s[2])
        cout << 1;
    else if (s[0] == s[1] || s[1] == s[2] || s[2] == s[0])
        cout << 3;
    else
        cout << 6;
    cout << endl;
    return 0;
}