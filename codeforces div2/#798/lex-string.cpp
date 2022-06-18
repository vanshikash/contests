#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a;
        cin >> b;
        string c;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0;
        int j = 0;
        int s = 0;
        int l1=n-2,l2=m-2;

        int cta = 0, ctb = 0;

        while(l1 > 0 || l2 > 0){
            if (((a[i] - 97) < (b[j] - 97)) && cta < k)
            {

                c[s] = a[i];
                cout<<c[s];
                s++;
                i++;
                l1--;
                cta++;
                ctb = 0;

            }
            else
            {
            
                if (ctb < k)
                {
                    c[s] = b[j];
                    cout<<c[s];
                    s++;
                    j++;
                    l2--;
                    cta = 0;
                }
            }
        }

    }
    return 0;
}