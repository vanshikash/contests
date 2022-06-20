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
        if(n%2 != 0){
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    cout << "1";
                else
                    cout << "0";
            }
        }
        else{
            for (int i = 0; i < n; i++)
            {
                if (i == 0 || i == n-1)
                    cout << "1";
                else
                    cout << "0";
            }

        }
        cout << endl;
    }
    return 0;
}