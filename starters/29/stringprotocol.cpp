#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt =0;
        for(int i = 0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                i++;
                cnt++;
            }else cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}