#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if ((x < y && x + 3 > y) || (y < x && y + 3 > x))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}