#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{   if (n < 0){return false;}
     if (n == 0)
    {
        return true;
    }
    int temp = n;
    int ans = 0;
    int count = 0;
   

    // while (temp % 10 == 0)
    // {
    //     temp = temp / 10;
    //     count++;            // not neccesary to write
    // }

    while (temp != 0)
    {
        int digit = temp % 10;
        ans = ans * 10 + digit;
        temp = temp / 10;
    }
    //ans = ans * pow(10, count);

    if (ans == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n ;
    int check = palindrome(n);
    if (check)
    {
        cout << n << " is palindrome";
    }
    else
    {
         cout << n << " is not palindrome";
    }
}