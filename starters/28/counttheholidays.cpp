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
        vector<bool> A(31);
        for(int i =0;i<n;i++)
        {
            int x;
            cin>>x;
            A[x] = true;
        }
        for(int i =1;i<=4;i++)
        {
            A[i*7]= true;
            A[7*i -1] = true;

        }
        int ans = 0;
        for(int i = 1;i<31;i++)
        {
            if(A[i])
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}