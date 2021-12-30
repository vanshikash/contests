#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t --)
    {
        int n;
        cin>>n;
        string S;
        cin>>S;
        char A[n];
        // cout<<S[0]<<S[1]<<S[2]<<S[3]<<S[4]<<S[5]<<S[6]<<S[7]<<endl;
        for(int i=0;i<n;i++)
        {
            A[i]=S[i];
        }
        // cout<<A[0]<<A[1]<<A[2]<<A[3]<<A[4]<<A[5]<<A[6]<<A[7]<<endl;
        for(int i=0;i<n;i++)
        {
            // cout<<1<<endl;
            if(A[i]=='c' && A[i+1]=='o' && A[i+2]=='d' && A[i+3]=='e')
            {
                cout<<"AC\n";
            }
            else if(A[i]=='c' && A[i+1]=='h' && A[i+2]=='e' && A[i+3]=='f')
            {
                // cout<<2<<endl;
                cout<<"WA\n";
            }
            else  
            continue;
        }
        
    }
    return 0;
}