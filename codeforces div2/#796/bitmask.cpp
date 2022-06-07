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
        int y;
        for(y = 0; y< INT_MAX; y++)
        {
            if(((x & y) > 0) && ((x ^ y) > 0))
            {
                cout<<y;
                break;
            }
        }
        
    }
    return 0;
}