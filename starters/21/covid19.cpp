#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n,m;
        cin>>n>>m;
        if(n%2 == 0 )
        {
            if(m%2 == 0)
            {
                cout<< ((n/2)*(m/2)) <<endl;
            }
            else cout<< ((n/2)*((m+1)/2))<<endl;
        }
        else
        {
            if(m%2 == 0)
            {
                cout<< (((n+1)/2)*(m/2)) <<endl;
            }
            else cout<< (((n+1)/2)*((m+1)/2))<<endl;
        }

    }
    return 0;
}