#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n;
        int orignial[n];
        int sorted[n];
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>original[i];
        }
        for(int i = 0;i<n;i++)
        {
            sorted[i] = original[i];
        }
        sort(sorted.begin(), sorted.end());
        for(int i = 0;i<n;i++)
        {
            if (sorted[i] == original[i])
            cout<<"yes\n";
            else cout<<"no\n";
        }        

        
    }
    return 0;
}