#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int digits;
        int num = n;
        int number = n;
        int digit = (int)log10(n);
        digits = digit + 1;
        // cout << "the number of digits : "<< digits << endl;
        while(number >=10)
        {
            number = number/10;
        }
        int firstdigit = number;
        // cout << "the first digit is " << firstdigit << endl;
        // cout << n << endl << num <<endl;
        // string num = to_string(n);
        // int length = strlen(num);
        if(digits == 1)
        {
            if(num % 2 == 0)
            {
                cout << "0\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if((num % 10) % 2 == 0)
        {
            cout << "0\n";
        }
        else if(firstdigit % 2 == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }

        // for(int i=0; i<=length; i++)
        // {
        //     if (num[i] % 2==0)
        // }
    }
    return 0;
}