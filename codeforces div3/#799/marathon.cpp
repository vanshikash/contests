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
        int ct = 0;
        if(b>a)
        ct++;
        if(c>a)
        ct++;
        if(d>a)
        ct++;

        cout<<ct<<"\n";
    }
    return 0;
}