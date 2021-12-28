#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int> o,e;
        // for(int i=1;i<=n;i++)
        // {
        //     if(i%2==0)
        //     {
        //         e.push_back(i);
        //     }
        //     else
        //     {
        //         o.push_back(i);
        //     }
        // }
        // vector<int> ans(n+1);

        cout<<n<<" ";
        for(int i=1;i<=n-1;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}