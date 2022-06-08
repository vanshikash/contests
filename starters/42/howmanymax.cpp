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
        string s;
        cin >> s;
        int cnt = 0;
        if (s.length() == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        for (int i = 1; i < s.length() ; i++)
        {
            if ((s[i] == '1') && (s[i - 1] == '0'))
            {
                cnt++;
            }
        }
        if (s[0] == '1')
        {
            cnt++;
        }
        if (s[s.length() - 1] == '0')
        {
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}