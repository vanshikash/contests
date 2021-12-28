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
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1== x2 || y1==y2)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}