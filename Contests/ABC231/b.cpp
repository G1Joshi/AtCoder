#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> m;
    while (n--)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    int mx = -1;
    string win;
    for (auto a : m)
    {
        if (a.second > mx)
        {
            mx = a.second;
            win = a.first;
        }
    }
    cout << win;
    return 0;
}