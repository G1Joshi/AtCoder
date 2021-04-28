#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mx = max(mx, a);
    }
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        mn = min(mn, b);
    }
    if (mn < mx)
        cout << 0;
    else
        cout << mn - mx + 1;
    return 0;
}