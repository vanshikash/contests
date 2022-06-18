#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int start = 0;
        int end = 0;
        int sum = 0;
        int maxlen = INT_MIN;
        int f = -1;
        while (end < n)
        {
            sum += a[end];
            if (sum < s)
            {
                end++;
            }
            else if (sum == s)
            {
                maxlen = max(maxlen, end - start + 1);
                f = 1;
                end++;
            }
            else if (sum > s)
            {
                while (sum > s)
                {
                    sum -= a[start];
                    start++;
                }
                if (sum == s)
                {
                    f = 1;
                    maxlen = max(maxlen, end - start + 1);
                }
                end++;
            }
        }
        if (f == 1)
        {
            cout << n - maxlen << "\n";
        }
        else
            cout << -1 << "\n"
    }
    return 0;
}