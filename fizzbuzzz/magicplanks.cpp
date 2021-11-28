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
        int n;
        cin >> n;
        string s;
        cin >> s;
        double answer = 0.0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1])
            {
                answer+=0.5;
            }
        }
        cout << floor(answer) << endl;
    }
    return 0;
}