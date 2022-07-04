#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
       int x;
       cin>>x;
       int rem = x%3;
       if(rem == 0) cout<<0<<endl;
       else if(rem == 1) cout<<2<<endl;
       else if(rem == 2) cout<<1<<endl;
    }
    return 0;
}

