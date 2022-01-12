#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int x = 2*b - c;
        int y = 2*b - a;
        int z = a+c;

        if(x%a==0 && x>0)
        {
            cout<<"YES\n";
        }
        else if(y%c==0 && y>0)
        {
            cout<<"YES\n";
        }
        else if((z%2==0 && (z/2)%b ==0) && x>0)
        {
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
    return 0;
}