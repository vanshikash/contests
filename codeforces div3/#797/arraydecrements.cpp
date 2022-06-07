#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int maxdiff = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]<b[i])
            {
                cout<<"NO\n";
            }
            int maxxdiff = max(maxdiff, abs(a[i]-b[i]))
        }
        
        
        
        for(int i = 0;i<n;i++)
        {
            int maxx = max(a[i]-maxxdiff,0);
            if(maxx == b[i] )
            {
                continue;
            }

        }

       
    
    }
    return 0;
}
