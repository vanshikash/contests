// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string a, b;
//         cin >> a >> b;

//         bool bigB;
//         int ans = 0;

//         bigB = b[n - 1] > a[n - 1];
//         if (bigB)
//             ans++;
//         for (int i = n - 2; i >= 0; i--)
//         {
//             if (b[i] > a[i])
//             {
//                 bigB = true;
//                 ans++;
//             }
//             else if (b[i] < a[i])
//             {
//                 bigB = false;
//             }
//             else
//             {
//                 if (bigB)
//                     ans++;
//             }
//             cout << ans << endl;
//         }
//     }
//     return 0;
// }
