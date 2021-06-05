#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
        cout << c;
    else if (b == c)
        cout << a;
    else if (c == a)
        cout << b;
    else
        cout << 0;
    return 0;
}