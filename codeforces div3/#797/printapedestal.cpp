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
        int h1,h2,h3;
        if((n+3)%3==0)
        {
        h1 = ((n+3)/3);
        }
        else h1 = ((n+3)/3)+1;
        h2 = h1-1;
        h3=n-h1-h2;
        if (h3==0)
            {
                h2--;
                h3++;
            }
        
        cout<<h2<<h1<<h3<<endl;;
    }
    return 0;
}