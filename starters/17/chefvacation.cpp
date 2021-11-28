#include <iostream>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int x,y,z;
        cin >> x >> y >> z;

        if (x + y <= z)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}