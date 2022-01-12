#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;

        if (n == 1)
        {
            if (a % 2 == 0)
            {
                cout << "even\n";
            }
            else
            {
                cout << "odd\n";
            }
            continue;
        }

        if (a % 2 != 0) // a odd all numbers odd
        {
            if (n % 2 == 0)
            {
                cout << "even\n";
            }
            else
                cout << "odd\n";
        }
        else
        {
            cout << "impossible\n";
            ;
        }
    }
    return 0;
}