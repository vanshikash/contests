#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[2][3] = {10,20,30,40,50,60};
    cout<<(*a + 2)<<(**a + 5)<<(*(a+1) + 2)<<endl;
    return 0;
}