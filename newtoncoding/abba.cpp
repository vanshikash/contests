#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char S[n];
    for(i=0;i<n;i++)
    {
        cin>>S[i];
    }
    int counta = 0, countb = 0;
    for(i=0;i<n;i++)
    {
        if(S[i] == 'a')
        {
            counta++;
        }
        else countb++;
    }
    if(counta<countb)
    {
        cout<<counta;
    }
    else if (counta == countb)
    cout<<counta;
    else cout<<countb;
    
    return 0;
}