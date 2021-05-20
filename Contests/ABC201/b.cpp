#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].second >> v[i].first;
    sort(v.begin(), v.end());
    cout << v[n - 2].second;
    return 0;
}