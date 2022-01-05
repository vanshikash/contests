#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, x, y, goldcoins;
        cin >> n >> x >> y;
        if((x+y)%2 == 0)
        {
            cout<<0<<endl;
        }
        else cout<<1;
    }
    return 0;
}