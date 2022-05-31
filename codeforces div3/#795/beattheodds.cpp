#include <bits/stdc++.h>
using namespace std;
bool isEven(int a)
{
    if (a % 2 == 0 && a != 1)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int counteven = 0;
    int countodd = 0;
    int t = 1;
    cin >> t;
    while (t--)
    {
        counteven = 0;
        countodd = 0;

        int n;
        cin >> n;
        int evens[n];
        for (int i = 0; i < n; i++)
        {
            cin >> evens[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (isEven(evens[i]))
            {

                counteven++;
            }
            else
            {

                countodd++;
            }
        }

        cout << min(counteven, countodd) << endl;
    }
    return EXIT_SUCCESS;
}