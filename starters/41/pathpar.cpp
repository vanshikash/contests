#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n;
       if(n==1 && k ==0)
       {
           cout<<"NO\n";
       }
       else if (n==1 && k==1)
       {
           cout<<"YES\n";
       }
       else if(n%2==0)
       {
           cout<<"YES\n";
       }
       else{
           if(k%2==0)
           {
               cout<<"NO\n";
           }
           else cout<<"YES\n";
       }
    }
    return 0;
}