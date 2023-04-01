#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int paper[128][128];
int bl, wh;

void abc(int y, int x, int s)
{
    int check = paper[y][x];
    for (int i = y; i < y + s; i++)
    {
        for (int j = x; j < x + s; j++)
        {

            if (check == 0 && paper[i][j] == 1)
            {
                check = 2;
            }
            else if (check == 1 && paper[i][j] == 0)
            {
                check = 2;
            }
            if (check == 2)
            {
                abc(y, x, s / 2);
                abc(y, x + s / 2, s / 2);
                abc(y + s / 2, x, s / 2);
                abc(y + s / 2, x + s / 2, s / 2);
                return;
            }
        }
    }
    if (check == 0)
        wh++;
    else
        bl++;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> paper[i][j];
    abc(0, 0, n);
    cout << wh << '\n';
    cout << bl << '\n';
    return 0;
}