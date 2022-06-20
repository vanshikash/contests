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
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        if((s*(1+(c/100.00)))>=a && (s*(1+(c/100.00)))<=b)
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