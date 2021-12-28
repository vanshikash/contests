#include <iostream>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n;
        cin>>n;
        n = n-1;
        int count = 0;
        for(int i=0;i*i<n;i++)
        {
            if(n%i==0)
            count = count +2;
        }
        if((pow(int(sqrt(n-1))),2)==n)
        
    }
    return 0;
}