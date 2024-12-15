#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Striver";
    cout << s[0] << endl;
    int len = s.size();
    cout << s[len-1] << endl;
    s[len-1]='z';
    cout << s;
    return 0;
}