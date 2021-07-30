#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    bool isEven = false;
    while (n--)
    {
        int a;
        cin >> a;
        x -= a;
        if (isEven)
            x += 1;
        isEven = !isEven;
    }
    if (x >= 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}