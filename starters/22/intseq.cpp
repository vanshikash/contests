#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
       int k;
       cin>>k; 
       int count = 0;
       while(k%2 == 0)
       {
           k/=2;
           count++;
       }
       cout<<count<<endl;
       
    }
    return 0;
}