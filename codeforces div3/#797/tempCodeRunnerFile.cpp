#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n;
        cin>>n;
        int gt[n];
        int ct[n];
        for(int i = 0;i<n;i++)
        {
            cin>>gt[i];
        }
        for(int i = 0;i<n;i++)
        {
            cin>>ct[i];
        }
        int dt[n];

        for(int i = 0;i<n;i++)
        {
            dt[i] = min(ct[i]-gt[i], ct[i]-ct[i-1]);
        }
        for(int i = 0;i<n;i++)
        {
            cout<<dt[i];
        }

    }
    return 0;
}