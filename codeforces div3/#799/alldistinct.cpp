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
        int a [n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        int ct = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                ct++;
            }
        }

        if (ct % 2 != 0)
        {
            ct = (ct + 1) / 2;
        }
        else
        {
            ct = ct / 2;
        }

        cout << (n - (ct * 2)) << "\n";
    }
    return 0;
}