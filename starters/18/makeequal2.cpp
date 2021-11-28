#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, i, max, min;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        max = a[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] > max)
            max = a[i];
        }
        min = a[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] < min)
            min = a[i];
        }
        cout << max - min << endl;
    }
}