#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout << "\n";

        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        int i,j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                if (a[i][j] == '#' &&
                    a[i - 1][j - 1] == '#' &&
                    a[i - 1][j + 1] == '#' &&
                    a[i + 1][j - 1] == '#' &&
                    a[i + 1][j + 1] == '#')
                {
                    cout << i + 1 << " " << j + 1 << "\n";
                    break;
                }
            }

        }
    }
    return 0;
}