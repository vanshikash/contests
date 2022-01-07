#include <bits/stdc++.h>
using namespace std;

bool keplerslaw(int t1, int t2, int r1, int r2)
{
    float t = (float)t1/t2;
    float r = (float)r1/r2;

    if(pow(t,2)==pow(r,3))
    {
        return true;
    }
    else return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        if(keplerslaw(t1,t2,r1,r2))
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }
    return 0;
}