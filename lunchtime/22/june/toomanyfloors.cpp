#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int x,y;
        cin>>x>>y;
        int floorchef, floorchefina;
        floorchef = x/10 +1;
        if(x%10 == 0)
        floorchef--;

        floorchefina = y/10 +1;
        if(y%10 == 0)
        floorchefina--;

        int ans = abs(floorchef-floorchefina);

        cout<<ans<<endl;


    }
    return 0;
}