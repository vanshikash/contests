#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A,A+n);
        int sum=0,cnt = 0;
        for(int i = n-1;i>=0;i--)
        {
            sum +=A[i];
            cnt++;
            if(sum>=w)
            {
                break;
            }
        }
        int ans;
        ans = n - cnt;
        cout<<ans<<endl;
    }
    return 0;
}