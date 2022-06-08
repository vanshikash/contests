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
        int flag = 0;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                cout << "NO\n";
                flag = -1;
                break;
            }
        }
        int d[n];
        if (flag != -1)
        {
            for (int i = 0; i < n; i++)
            {
                d[i] = a[i] - b[i];
            }
            for (int i = 1; i < n; i++)
            {

                // try adding if flag != -1 here
                if ((d[i] != d[i - 1]))
                {
                    if (b[i] != 0)
                    {
                        cout << "no\n";
                        flag = -1;
                        break;
                    }
                }
            }
            if (flag != -1)
            {
                cout << "yes\n";
            }
        }
    }
    return 0;
}