#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int dsad,tocd,dmd,dsas,tocs,dms;
        cin>>dsad>>tocd>>dmd;
        cin>>dsas>>tocs>>dms;
        int sumd = dsad+tocd+dmd;
        int sums = dsas+tocs+dms;
        if (sumd>sums)
        {
            cout<<"Dragon\n";
        }
        else if(sums>sumd)
        {
            cout<<"Sloth\n";
        }
        else{
            if(dsad>dsas)
            {
                cout<<"Dragon\n";
            }
            else if(dsas>dsad)
            {
                cout<<"Sloth\n";
            }
            else 
            {
                if(tocd>tocs)
                {
                    cout<<"Dragon\n";
                }
                else if(tocs>tocd)
                {
                    cout<<"Sloth\n";
                }
                else {
                    cout<<"Tie\n";
                }
            }
        }
    }
    return 0;
}