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
        if (n == 3)
        {
            cout << -1 << endl;
        }
        else if(n<= 10)
        {
            for (int i = n; i > 4; i--)
                {
                    cout << i << " ";
                }
                cout << "1 2 4 3\n";
        }
        else 
        {
            for (int i = 10; i > 4; i--)
                {
                    cout << i << " ";
                }
                cout << "1 2 4 3\n";
            for(int i = 11;i<=n;i++)
            {
                cout<<i<<" ";
            }

        }
        cout<<aendl;
    }
    return 0;
}
