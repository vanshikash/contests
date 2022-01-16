#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n;
        cin>>n;
        // int r1,g1,b1,r2,g2,b2,r3,g3,b3;
        // cin>>r1>>g1>>b1;
        // cin>>r2>>g2>>b2;
        // cin>>r3>>g3>>b3;
        int box1[3];
        for(int i=0;i<3;i++)
        {
            cin>>box1[i];
        }
        int box2[3];
        for(int i=0;i<3;i++)
        {
            cin>>box2[i];
        }
        int box3[3];
        for(int i=0;i<3;i++)
        {
            cin>>box3[i];
        }

        int count =0;

        int min1g2r = min(box1[1], box2[0]);
        count = min1g2r;
        


    }
    return 0;
}