#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int A[n];
        
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++) 
        {
            cin>>A[i];
            mp[A[i]]++;
        }
        int s =0;
        int f=0;
        for(int i = 0; i<k;i++)
        {
        
            if(mp[i]==0) f = 1;
            s+=mp[i];
            
        }
        if((m>=k) && (!f) && (mp[k]<= (n-m)))
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}

