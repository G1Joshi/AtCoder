#include <iostream>
using namespace std;

int g1(int x)
{
    int t[10] = {};
    while (x)
    {
        t[x % 10]++;
        x /= 10;
    }
    for (int i = 9; i >= 0; i--)
        while (t[i]--)
            x = x * 10 + i;
    return x;
}

int g2(int x)
{
    int t[10] = {};
    while (x)
    {
        t[x % 10]++;
        x /= 10;
    }
    for (int i = 0; i <= 9; i++)
        while (t[i]--)
            x = x * 10 + i;
    return x;
}

int f(int x)
{
    return g1(x) - g2(x);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[k + 1];
    a[0] = n;
    for (int i = 1; i <= k; i++)
        a[i] = f(a[i - 1]);
    cout << a[k];
    return 0;
}