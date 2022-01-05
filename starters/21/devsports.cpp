#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
      int z,y,a,b,c;
      cin>>z>>y>>a>>b>>c;
      if(z>=y+a+b+c)
      {
          cout<<"YES";
      }  
      else cout<<"NO";
    }
    return 0;
}