#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
      int Pa,Pb,Qa,Qb;
      cin>>Pa>>Pb>>Qa>>Qb;

        int p = max(Pa,Pb);
        int q = max(Qa,Qb);

        if(p<q)
        {
            cout<<"P\n";
        }
        else if(p>q)
        {
            cout<<"Q\n";
        }
        else cout<<"TIE\n";


    }
    return 0;
}