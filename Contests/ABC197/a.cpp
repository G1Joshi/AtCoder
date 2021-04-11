#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char c = s[0];
    s[0] = s[1];
    s[1] = s[2];
    s[2] = c;
    cout << s;
    return 0;
}