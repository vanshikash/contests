#include <bits/stdc++.h>
using namespace std;
bool isEqual(int a[], int b[], int n);
int arrDec(int a[], int n);
bool notNull(int a[], int n);
int sol(int a[], int b[], int n);
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sol(a,b,n);
    }

    return 0;
}
int sol(int a[], int b[], int n)
{
    while (notNull(a,n))
    {
        if (isEqual(a, b, n))
        {
            cout << "YES\n";
            return 0;
        }
        else
            arrDec(a, n);
    }
    cout<<"NO\n";
    return 0;
}

int arrDec(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[i] = a[i] - 1;
        }
    }
    return 0;
}

bool isEqual(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
bool notNull(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            return true;
    }
    return false;
}