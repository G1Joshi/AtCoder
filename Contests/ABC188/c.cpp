#include <bits/stdc++.h>
using namespace std;

int runner(vector<int> u, vector<int> v, int n)
{
    while (n != 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] < v[i + 1])
                v.erase(v.begin() + i);
            else
                v.erase(v.begin() + (i + 1));
            --n;
        }
    }
    return find(u.begin(), u.end(), min(v[0], v[1])) - u.begin() + 1;
}

int main()
{
    int n;
    cin >> n;
    n = (int)pow(2, n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << runner(v, v, n);
    return 0;
}