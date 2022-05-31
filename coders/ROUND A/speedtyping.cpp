#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string I, P;
        cin >> I;
        cin >> P;
        int n = I.length();
        int m = P.length();
        int count = 0;
        bool flag = 1;
        if (n == m)
        {
            for (int i = 0, j = 0; i < n, j < m; i++, j++)
            {
                if (I[i] == P[j])
                {
                    continue;
                }
                else
                    cout << "IMPOSSIBLE\n";
            }
        }

        else
        {
            for (int i = 0, j = 0; i < n, j < m; i++, j++)
            {
                if (I[i] == P[j])
                {
                    continue;
                }
                else
                {
                    count++;
                    i--;
                }
            }
            if (count == 0 || count == m)
            {
                cout << "IMPOSSIBLE\n";
            }
            else
            {
                cout << count << endl;
            }
        }
    }
    return 0;
}