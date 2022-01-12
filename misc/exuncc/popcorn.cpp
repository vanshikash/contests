#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;

        int a = a1+a2;
        int b = b1+b2;
        int c = c1+c2;
        // int temp = max (b,c);

        int maximum = max(a, max (b,c));
        cout<<maximum<<endl;

    }
    return 0;
}