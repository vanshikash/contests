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
        int x1,x2,time;
        cin>>x1>>x2;
        if(x1>=x2)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}