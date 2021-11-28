#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int N,K;
        cin>>N>>K;
        int bites;
        for(bites = 0; (N-(bites*K)) >0; bites++)
        {
            continue;
        }
        if(N==0)
        {
            cout<<"0\n";
        }
        else if(N%K ==0)
        {
            cout<<bites<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}