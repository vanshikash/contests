#include <iostream>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n >= 21)
        {
            cout<< "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}