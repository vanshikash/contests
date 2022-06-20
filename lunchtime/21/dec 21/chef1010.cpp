#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
      int n,count0,count1,ans;
      count0 = 0;
      count1 = 0;
      cin>>n;
      int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }  
        for(int i=0;i<n;i++)
        {
            if(A[i]==0)
            {
                count0 ++;
            }
            else
            {
                count1 ++;
            }
        }
        if (count0 == 0 || count1 == 0)
        {
            ans = 0;
        }
        else if(count0<count1)
        {
            ans = count0 - 1;
        }
        else if (count0 == count1)
        {
            ans = count0 - 1;
        }
        else if(count1<count0)
        {
            ans = count1 - 1;
        }

        cout<<ans<<endl;

    }
    return 0;
}