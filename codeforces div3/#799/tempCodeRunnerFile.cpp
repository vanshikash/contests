#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout << "\n";

        char a[7][7];
        for (int i = 0; i <= 7; i++)
        {
            for (int j = 0; j <= 7; j++)
            {
                cin >> a[i][j];
            }
            cout << endl;
        }
        int f = -1;

        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (a[i][j] == '#' &&
                    a[i - 1][j - 1] == '#' &&
                    a[i - 1][j + 1] == '#' &&
                    a[i + 1][j - 1] == '#' &&
                    a[i + 1][j + 1] == '#')
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                break;
        }
        {
            cout << i + 1 << " " << j + 1 << "\n";
        }
    }
    return 0;
}