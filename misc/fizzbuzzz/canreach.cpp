#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if(x%k ==0 && y%k==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}