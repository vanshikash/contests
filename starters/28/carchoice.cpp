#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        double x1,x2,y1,y2;
        cin>> x1>>x2>>y1>>y2;
        double c1 = y1/x1;
        double c2 = y2/x2;
        if(c1<c2)
        {
            cout<<-1<<endl;
        }
        else if (c2<c1)
        {
            cout<<1<<endl;
        }
        else cout<<0<<endl;

    }
    return 0;
}