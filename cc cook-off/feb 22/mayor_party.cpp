#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b > a+c)
        {
            cout<<b<<endl;
        }
        else cout<<a+c;
    }
    return 0;
}