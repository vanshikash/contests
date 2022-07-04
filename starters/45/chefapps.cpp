#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
       int s,x,y,z;
       cin>>s>>x>>y>>z;
       int rem = s-(x+y);
       if(rem>=z)
       {
        cout<<0<<endl;
       } 
       else if(rem<z)
       {
        if((rem+x>=z)|| (rem+y>=z))
        {
            cout<<1<<endl;
        }
        else 
        {
            cout<<2<<endl;
        }
       }

    }
    return 0;
}