#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int l = 1 * a;
    int h = 6 * a;
    if (l <= b && b <= h)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}