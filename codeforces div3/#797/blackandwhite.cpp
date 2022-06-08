#include <bits/stdc++.h>
using namespace std;

void f(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int ct = 0; int ans = INT_MAX;
    for(int i = 0; i < k; i++){
        if(s[i] == 'W') ct++;
    }
    ans = ct;
    for(int i = k; i<n;i++)
    {
        if (s[i] == 'W') ct++;
        if (s[i-k] == 'W') ct--;
        if(ct<ans) ans = ct;
    }
    cout << ans << "\n";
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {   
        f();
        continue;
    }
    return 0;
}