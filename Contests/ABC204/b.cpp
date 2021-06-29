#include <iostream>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a > 10)
            c += a - 10;
    }
    cout << c;
    return 0;
}