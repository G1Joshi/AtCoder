#include <iostream>
using namespace std;

int main()
{
    int c;
    cin >> c;
    if (c % 100)
    {
        int b = c / 100;
        b++;
        b *= 100;
        cout << b - c;
    }
    else
    {
        cout << 100;
    }
    return 0;
}