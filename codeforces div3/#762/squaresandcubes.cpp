// check perfect squares and perfect cubes
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int count = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//             if((j == i * i) || (j == ((i * i) * i)))     
//             count++;
//             // continue;
//             }
            
//         }
//         cout << count << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j*j <= i; j++)
            {
                if((j*j == i) || ((j*j*j) == i))  
                    count++;  
            }
            
        }
        cout << count << endl;
    }
    return 0;
}
