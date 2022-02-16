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
        int sum = 0;
        int A[2*n];
        for(int i = 0;i<2*n;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        if(sum%2==0)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}