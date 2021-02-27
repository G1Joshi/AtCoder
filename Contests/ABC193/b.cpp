#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, c = INT_MAX;
    cin >> n;
    while (n--)
    {
        int a, p, x;
        cin >> a >> p >> x;
        if (x - a > 0)
            c = min(c, p);
    }
    if (c == INT_MAX)
        cout << -1;
    else
        cout << c;
    return 0;
}