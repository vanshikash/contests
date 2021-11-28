#include <iostream>
#include<cstring>
// #include<cmath>
// to find gcd of two numbers
using namespace std;
int gcd(int a, int b);
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n,k,p;
        cin>>n>>k;
        // for(p=1;(k*p)%n != 0; p++)
        // {
        //     continue;
        // }
        p=0;
        // while((k*p)%n != 0)
        // {
        //     p++;
        // }
        // cout<<p<<endl;
        int g = gcd(n,k);
        p=n/g;
        cout<<p<<endl;
        

    }
    
    return 0;
}
int gcd(int a, int b)
    {
        if (b==0)
        {
        return a;
        }
        else 
        return gcd(b, a%b);
    }