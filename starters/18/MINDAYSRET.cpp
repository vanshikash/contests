#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n,k;
        float d;
        cin >> n >> k;
        d = n/(float)k;
        // cout<< d<<endl;
        int days = d;
        // cout<<days<<endl;
        if (floor(d) ==  d)
        {
            cout<< days<<endl;
        }
        else{
            cout<< days + 1 <<endl;
        }

    }
    return 0;
}