#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s = "", rs = "";
        if (x == 1)
        {
            for (int i = 0; i < n; i++)
            {
                s += "a";
            }
            cout << s << endl;
        }
        // else if (n % 2 == 0 && x > n / 2)
        //     cout << -1 << endl;
        else if (n % 2 != 0 && x > (n / 2) + 1)
            cout << -1 << endl;
        else
        {
            int k = 0;
            for(int i = 0;i<n; i+=2)
            {
                s += ('a' + (k%x));
                if(i+1<n){
                    rs += ('a' + (k%x));
                }
                k++;
            }
            reverse(rs.begin(),rs.end());
            cout<<s+""+rs<<endl;
        }
    }
    return 0;
}

// int m = n - n / 2;
//         string s;
//         int uc = 0;
//         int j = 0;
//         if (n == x)
//         {
//             if (n == 1 && x == 1)
//             {
//                 cout << 'a' << endl;

//             }
//             else
//             {
//                 cout << -1 << endl;

//             }
//         }
//         else if (x == 0)
//         {

//             for (int i = 0; i < n; i++)
//             {
//                 cout << 'a';
//             }
//         }
//         else
//         {
//             for (int i = 0; i < m; i++)
//             {
//                 if (uc == x)
//                 {
//                     j = 0;
//                 }
//                 else
//                 {
//                     s[i] = (char)(97 + j) ;
//                     uc++;
//                 }
//             }
//         }

//         string rs;
//         for (int i = 0; i < m; i++)
//             rs[i] = s[i];

//         for (int i = 0; i < m / 2; i++)
//             swap(rs[i], rs[m - i - 1]);

//         for (int i = 0; i < m; i++)
//             cout << s[i];
//         for (int i = m; i < n; i++)
//             cout << rs[i];