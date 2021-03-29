#include <iostream>
using namespace std;

int main()
{
    int m, h;
    cin >> m >> h;
    if (h % m)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}