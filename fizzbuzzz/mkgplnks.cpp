#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n;
        cin>>n;
        string plank;
        cin>>plank;
        int ans = 0,answer=0;
        for(int i=0;i<n;i++)
        {
            if(plank[i] == 'W')
            {
                int j = i+1;
                while(j<n && plank[j]==plank[i])
                j++;
                ans+=j;
            }
            else if (i>0 && plank[i] != plank[i-1])
            {
                answer++;
                int k = i+1;
                while(k<n && plank[k] == plank[i])
                k++;
                ans+=k;
            }
            else
            {
                int k = i+1;
                while(k<n && plank[k] == plank[i])
                k++;
                ans+=k;

            }
        }
        if(ans) cout<<answer<<endl;
        else cout<<0<<endl;
    }
    return 0;
}