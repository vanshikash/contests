#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int s[4];
        for (int i = 0; i < 4; i++)
        {
            cin>>s[i];
        }
        // cout<<s[4];
        int naps=0;
        for(int i=0;i<4;i++)
        {
            if(s[i]==0)
            naps++;
        }
        cout<<"naps "<<naps<<endl;
        int ans = naps/k;
        cout<<ans<<endl;
    }
    return 0;
}