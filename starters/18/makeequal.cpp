#include <iostream>
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
        int a[n];
        int max = 0;
        int min = 1e8;
        for (int &i : a)
        {
            cin >> i;
            if (i > max)
                max = i;
            if (i < min)
                min = i;
        }
        cout << max - min << endl;
    }
    return 0;
}