#include <iostream>
#define ll long long
using namespace std;

ll fun(ll n)
{
    ll c = 0;
    while (n)
    {
        c += n % 10;
        n /= 10;
    }
    return c;
}

int main()
{
    ll s, t;
    cin >> s >> t;
    cout << max(fun(s), fun(t));
    return 0;
}