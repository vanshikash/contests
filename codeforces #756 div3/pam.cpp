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
        int a, b;
        cin >> a >> b;
        if ((a == 1 && b >= 3) || (b == 1 && a >= 3))
        {
            cout << "1\n";
        }
        else if ((a == 2 && b >= 3) || (b == 2 && a >= 3))
        {
            cout << "2\n";
        }
        else if ((a == 3 && b >= 3) || (b == 3 && a >= 3))
        {
            cout << "3\n";
        }
        else if (a == b)
        {
            cout << (a+b)/2 << endl;
        }
        else 
        {
            
        }
    }
    return 0;
}