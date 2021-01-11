#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        sum += (a[i] * b[i]);
    if (sum)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}