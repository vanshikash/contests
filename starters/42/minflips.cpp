#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int p = 0;
        int m = 0;
        int f = -1;

        for (int i = 0; i < n; i++)
        {
            if (n % 2 != 0)
            {
                cout << -1 << "\n";
                f = 1;
                break;
            }
            if (a[i] == 1)
            {
                p++;
            }
            else
            {
                m++;
            }
        }
        if (f == -1)
        {
            int d = (abs(p - m) / 2);
            cout << d << "\n";
        }
    }
}