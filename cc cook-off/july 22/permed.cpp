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

        vector<int> a;
        int x = n;
        int f = 1;
        for(int i = 0;i<n;i++)
        {
            if(i%2==0)
            {
                cout<<x--<<" ";
            }
            else {
                cout<<f++<<" ";
            }
        }
        cout<<"\n";
        
    }
    return 0;
}

