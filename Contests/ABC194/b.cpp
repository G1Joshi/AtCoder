#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n, a = INT_MAX, b = INT_MAX, c = INT_MAX, ai = 0, bi = 0;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        c = min(c, v[i].first + v[i].second);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i].first < a)
        {
            a = v[i].first;
            ai = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i].second < b)
        {
            b = v[i].second;
            bi = i;
        }
    }
    if (a <= b)
    {
        b = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (ai != i && v[i].second < b)
            {
                b = v[i].second;
            }
        }
    }
    else
    {
        a = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (bi != i && v[i].first < a)
            {
                a = v[i].first;
            }
        }
    }
    cout << min(max(a, b), c);
    return 0;
}