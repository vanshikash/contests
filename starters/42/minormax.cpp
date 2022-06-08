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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int min[n];
        int max[n];
        min[0]=b[0];
        max[0]=b[0];
        int mint = 0;
        int maxt = 0;
        bool flag = true;
        for(int i = 1; i,n;i++)
        {
            if(b[i]<=min[mint])
            {
                mint++;
                min[mint] = b[i];
            }
            else{
                mint++;
                min[mint]=min[mint -1];
            }
            if(b[i]>=max[maxt])
            {
                maxt++;
                max[maxt] = b[i];
            }
            else{
                maxt++;
                max[maxt]=max[maxt -1];
            }
        }
         for(int i = 0;i<n;i++)
            {
                if(b[i]== min[i] || b[i]==max[i])
                continue;
                else{
                    flag = false;
                    break;
                }
            }
        if(flag == true)
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";
    }
    return 0;
}