#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(n>= (x*1 + y*2))
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}

