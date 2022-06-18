#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
       int n; cin>>n;
       string s; cin>>s;
       char ans[n/2];

       for (int i = 0; i < n-1; i=i+2)
       {
            if(s[i]== '0' && s[i+1]== '0')
            {
                ans[i/2] = 'A';
                cout<<ans[i/2];
            }
            else if(s[i]=='0' && s[i+1]=='1')
            {
                ans[i/2] = 'T';
                cout<<ans[i/2];
            }
            else if(s[i]=='1' && s[i+1]=='0')
            {
                ans[i/2] = 'C';
                cout<<ans[i/2];
                    
            }
            else if(s[i]=='1' && s[i+1]=='1'){
                ans[i/2] = 'G';
                cout<<ans[i/2];
            }
       }
       cout<<endl;

        
    }
    return 0;
}