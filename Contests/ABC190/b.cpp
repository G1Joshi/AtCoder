#include <iostream>
using namespace std;

int main()
{
    int N, S, D;
    cin >> N >> S >> D;
    while (N--)
    {
        int s, d;
        cin >> s >> d;
        if (s < S && d > D)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}