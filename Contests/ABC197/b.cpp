#include <iostream>
using namespace std;

int main()
{
    int h, w, x, y, c;
    cin >> h >> w >> x >> y;
    char g[h][w];
    --x;
    --y;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            cin >> g[i][j];
    if (g[x][y] == '#')
        c = 0;
    else
    {
        c = 1;
        for (int i = x, j = y - 1; j >= 0; j--)
        {
            if (g[i][j] == '.')
                c++;
            else
                break;
        }
        for (int i = x, j = y + 1; j < w; j++)
        {
            if (g[i][j] == '.')
                c++;
            else
                break;
        }
        for (int i = x - 1, j = y; i >= 0; i--)
        {
            if (g[i][j] == '.')
                c++;
            else
                break;
        }
        for (int i = x + 1, j = y; i < h; i++)
        {
            if (g[i][j] == '.')
                c++;
            else
                break;
        }
    }
    cout << c;
    return 0;
}