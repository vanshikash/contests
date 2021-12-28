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
        int x,p,y,q;
        cin>>x>>y>>p>>q;
        int t1 = x + 10*p;
        int t2 = y + 10*q;
        if(t1>t2)
        {
            cout<<"CHEFINA\n";
        }
        else if(t1<t2)
        {
            cout<<"CHEF\n";
        }
        else
        {
            cout<<"DRAW\n";
        }
    }
    return 0;
}