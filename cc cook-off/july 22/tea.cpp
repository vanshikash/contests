#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
       double x,y,z;
       cin>>x>>y>>z;
       int cost = 0;
       cost = (int)z*(int)(ceil(x/y));
       cout<<cost<<endl;
    }
    return 0;
}

