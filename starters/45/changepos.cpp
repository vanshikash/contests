#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a!=c && b!= d)
        {
            cout<<1<<endl;
        }
        else if(a==c && b==d)
        {
            cout<<0<<endl;
        }
        else cout<<2<<endl;
    }

    return 0;
}
