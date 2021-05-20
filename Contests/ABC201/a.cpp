#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) == 2 * c || (b + c) == 2 * a || (c + a) == 2 * b)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}