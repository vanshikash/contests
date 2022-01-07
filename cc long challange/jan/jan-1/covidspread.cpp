#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n, d;
        cin >> n >> d;
        long long int infected;
        if (d <= 10)
        {
            infected = pow(2, d);
        }
        else if (d <= 20)
        {
            infected = 1024 * (pow(3, d - 10));
        }
        else
        {
            infected = n;
        }

        if (infected >= n)
        {
            cout << n << endl;
        }
        else
            cout << infected << endl;
    }
    return 0;
}