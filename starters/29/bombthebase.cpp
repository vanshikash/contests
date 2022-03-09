#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
       int n,x;
       cin>>n>>x;
       int A[n];
       for(int i = 0;i<n;i++)
       {
           cin>>A[i];
       } 

       for(int j = n-1;j>=0;j--)
       {
           
           if(x>A[j])
           {
               cout<<j+1<<endl;
               break;
           }
       }
       
    }
    cout<<"0";
    return 0;
}