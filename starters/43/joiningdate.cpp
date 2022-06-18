#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = n / 5 - k / 5;

        if (k % 5 == 0)
            ans++;
        if (n % 5 == 0 && n > 0)
            ans--;

        cout << ans << endl;
    }
    return 0;
}