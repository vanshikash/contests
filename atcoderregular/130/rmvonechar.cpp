// erasing character from string at position i
#include <iostream>
#include <string>
using namespace std;
// declaring prototype
string removechar(int x, string str);

// main function
int main()
{
    int n, i, j;
    string s;
    cin >> n;
    cin >> s;
    // cout<<n<<endl<<s;
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            string Si = removechar(i, s);
            string Sj = removechar(j, s);;
            // cout<<"Si: "<<Si<<" "<<"Sj: "<<Sj<<endl;
            if (Si == Sj)
            {
                count++;
            }
            else
                continue;
        }
    }
    cout << count << endl;
}
string removechar(int x, string str)
{
    // erases character at position x
    str.erase(str.begin() + x - 1);
    return str;
}

// // erasing character from string at position i
// #include <iostream>
// #include <string>
// using namespace std;
// // declaring prototype
// string removechar(int x, string str);

// // main function
// int main()
// {
//     int n, i, j;
//     string s;
//     cin >> n;
//     cin >> s;
//     // cout<<n<<endl<<s;
//     int count = 0;
//     string Si = removechar(i, s);
//     string Sj = removechar(j, s);
//     // cout<<"Si: "<<Si<<" "<<"Sj"<<Sj<<endl;
//     char leftstr[] = Si;
//     char rightstr[] = Sj;       
//     int ans = strcmp(leftstr,rightstr)
//     if(ans==0)
//     count ++;
//     cout << count << endl;
// }
// string removechar(int x, string str)
// {
//     // erases character at position x
//     str.erase(str.begin() + x - 1);
//     return str;
// }