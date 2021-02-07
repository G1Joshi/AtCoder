#include <iostream>
using namespace std;

int main()
{
    float v, t, s, d, i;
    cin >> v >> t >> s >> d;
    i = d / v;
    if (i >= t && i <= s)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}