#include <iostream>
using namespace std;

string bad(string s)
{
    bool o = 1;
    for (int i = 0; s[i]; i++)
    {
        if (o && islower(s[i]))
            o = 0;
        else if (!o && isupper(s[i]))
            o = 1;
        else
            return "No";
    }
    return "Yes";
}

int main()
{
    string s;
    cin >> s;
    cout << bad(s);
    return 0;
}