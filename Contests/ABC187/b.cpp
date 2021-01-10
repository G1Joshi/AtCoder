#include <iostream>
#define ll long long
using namespace std;

float slope(int x1, int y1, int x2, int y2)
{
    return (float)(y2 - y1) / (float)(x2 - x1);
}

int main()
{
    int n, c = 0;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            float s = slope(x[i], y[i], x[j], y[j]);
            if (s >= -1 && s <= 1)
                c++;
        }
    }
    cout << c;
    return 0;
}