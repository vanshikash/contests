#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int x,y;
        cin>>x>>y;
        int count = 0;
        
        int z = x-y;
        if(z>0 )
        {
            if(z%2==0)
            {
                z = z/2;
            }
            else count = z/2 +2;
        }
        if (z<0)
        {
            z = -z;
            count =z;
        }
        

        cout<<count<<"\n";

    }
    return 0;
}