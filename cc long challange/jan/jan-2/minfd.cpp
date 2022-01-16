#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        sort(A, A + n);
        int sum = 0;
        int count = 0;
        int flag =0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += A[i];
            count++;
            if (sum >= x)
            {
                flag =1;
                break;
            }
        }
        if(flag ==1)
        {
            cout<<count <<endl;
        }
        else cout<<"-1"<<endl;
        
    }
    return 0;
}