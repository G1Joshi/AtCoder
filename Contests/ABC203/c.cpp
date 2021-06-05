#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v(n + 1);
    for (ll i = 1; i <= n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    for (ll i = 1; i <= n; i++)
    {
        if (k >= v[i].first)
            k += v[i].second;
    }
    cout << k;
    return 0;
}