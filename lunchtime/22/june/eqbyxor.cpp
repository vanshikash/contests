#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int t = 1;
    cin >> t;
    while(t --)
    {
        int a, b, n;
        cin>>a>>b>>n;
        int c = pow(2,(ceil)(log2(n)))
        if(a==b)
        cout<<"0\n";
        else if(n == 1)
        cout<<"-1\n";
        else if(a^b < n)
        cout<<"1\n";
        else if(a^b < c)
        cout<<"2\n";
        else cout<<"-1\n";



    }
    return 0;
}






// #include <bits/stdc++.h>
// using namespace std;
// string decToBinary(int x);
// int main()
// {
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, n;
//         cin >> a >> b >> n;
//         int flag = -1;
//         string stra = decToBinary(a);
//         string strb = decToBinary(b);
//         string strn = decToBinary(n);
//         // 11000
//         // 11101
//         //   101
//         //   100 
//         //   001

//         if (a == b)
//         {
//             cout << "0\n";
//         }
//         else if (n==1)
//         {
//             cout<<"-1\n";
//         }
//         else if((strn.size()>= stra.size()) && strn.size()>= strb.size())
//         {
//             cout<<"1\n";
//         }
//         else
//         {
//             for (int i = strn.size(); i < stra.size(); i++)
//             {
//                 if (stra[i] != strb[i])
//                 {
//                     cout << "-1\n";
//                     flag = 1;
//                     break;
//                 }
//             }
//             if (flag != 1)
//             {
//                 if(a^b >= n)
//                 {
//                     cout<<"2\n";
//                 }
//                 else cout<<"1\n";
//             }
//         }
//     }
//     return 0;
// }

// string decToBinary(int x)
// {
//     string bin;

//     int i = 0;
//     while (x > 0)
//     {

//         bin[i] = x % 2;
//         x /= 2;
//         i++;
//     }
//     reverse(bin.begin(), bin.end());
//     return bin;
// }