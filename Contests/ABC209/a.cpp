#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = b - a + 1;
    if (c > 0)
        cout << c;
    else
        cout << 0;
    return 0;
}