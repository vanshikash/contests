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
        vector<pair<int, int>> shoes(n);
        int MAX = 0;
        vector<int> out(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> shoes[i].first;
            shoes[i].second = i;
            out[i] = i + 1;
        }
        sort(shoes.begin(), shoes.end());

        bool ans = 1;
        for (int i = 0; i < n; ++i)
        {
            if (i == 0 && shoes[i].first != shoes[i + 1].first)
            {
                ans = 0;
                break;
            }
            if (i == n - 1 && shoes[i].first != shoes[i - 1].first)
            {
                ans = 0;
                break;
            }
            if (i > 0 && i < n - 1 && shoes[i].first != shoes[i + 1].first && shoes[i].first != shoes[i - 1].first)
            {
                ans = 0;
                break;
            }
            if (shoes[i].first == shoes[i + 1].first)
            {
                swap(out[shoes[i].second], out[shoes[i + 1].second]);
            }
        }
        if (!ans)
            cout << "-1" << endl;
        else
        {
            for (int i = 0; i < n; ++i)
                cout << out[i] << ' ';
            cout << endl;
        }
    }
    return 0;
}