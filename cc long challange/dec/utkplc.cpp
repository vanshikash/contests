#include <iostream>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        char first,second,third;
        cin>>first>>second>>third;
        char x,y;
        cin>>x>>y;
        if(x == first || y == first)
        {
            cout<<first<<endl;
        }
        else if(x == second || y == second)
        {
            cout<<second<<endl;
        }
        else 
        {
            cout<<third<<endl;
        }
        

    }
    return 0;
}