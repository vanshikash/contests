#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a >= b)
        {
            b = b + c;
            if (a >= b)
            {
                b = b + d;
                if (a >= b)
                {
                    cout << "N\n";
                }
                else
                    cout << "S\n";
            }
            else
            {
                a = a + d;
                if (a >= b)
                {
                    cout << "N\n";
                }
                else
                    cout << "S\n";
            }
        }
        else 
        {
            a = a+c;
            if (a >= b)
            {
                b = b + d;
                if (a >= b)
                {
                    cout << "N\n";
                }
                else
                    cout << "S\n";
            }
            else
            {
                a = a + d;
                if (a >= b)
                {
                    cout << "N\n";
                }
                else
                    cout << "S\n";
            }

        }
        
    }
    return 0;
}