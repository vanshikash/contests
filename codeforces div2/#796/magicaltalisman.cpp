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
        vector<int> power;
        int x;
        while(cin>>x)
            power.push_back(x);
        
        for(int i = 0;i<power.size();i++)
        {
            if((power.at(i))%2 == 0 )
            {
                if(power.at(i+1)%2 ==0)
                {
                   power.at(i+1) = ((power.at(i)) +(power.at(i+1)))/2
                   
                   power.erase(power.begin() + i);
                }
                else if(power.at(i+1)%2 !=0)
                {
                   power.at(i+1) = ((power.at(i)) +(power.at(i+1)))
                   
                   power.erase(power.begin() + i);
                } 
                {
                    
                }
            }
        }
    }
    return 0;
}