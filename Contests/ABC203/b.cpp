#include <iostream>
using namespace std;

int main()
{
    int n, k, x = 100, sum = 0;
    ;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            sum += x + j;
        }
        x += 100;
    }
    cout << sum;
    return 0;
}