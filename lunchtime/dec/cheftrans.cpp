#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y;
        if(x+y > z)
        {
            cout<<"TRAIN";
        }
        else if(x+y < z)
        {
            cout<<"PLANEBUS";
        }
        else 
        {
            cout<<"EQUAL";
        }
    }
    return 0;
}