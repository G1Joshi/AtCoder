#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c)
    {
        if (b > a)
            cout << "Aoki";
        else
            cout << "Takahashi";
    }
    else
    {
        if (a > b)
            cout << "Takahashi";
        else
            cout << "Aoki";
    }
    return 0;
}