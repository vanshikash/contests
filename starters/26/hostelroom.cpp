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
        for(int i = 1;i<=n;i++)
        {
            cin>>A[i];
        }
        int count = x;
        int maxc = x;
        for(int i = 1; i<=n;i++)
        {
            if(A[i]>=0)
            {
                count +=A[i];
                maxc = max(count,maxc);
            }
            else
            {
                count += A[i];
                maxc = max(count,maxc);
            }
        }
        cout<<maxc<<endl;

    }
    return 0;
}