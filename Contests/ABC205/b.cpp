#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    string s = "", t = "";
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        s += x;
        t += i;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
        cout << "Yes";
    else
        cout << "No";
}