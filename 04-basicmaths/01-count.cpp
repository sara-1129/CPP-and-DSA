#include<bits/stdc++.h>
using namespace std;

void countDigits (int n)
{
    int count  = 0;
    while (n > 0)
    {
       int temp = n % 10;
       cout << "digit extracted :" << temp << endl;
       n = n / 10;
       count++;
    }
    cout << "The number of digits = " << count << endl;
}

// another way

int count(int n)
{
    int count = (int)(log10(n) + 1);
    return count;
}

int main()
{
    int n;
    cin >> n;
    countDigits(n);
   int ans = count(n);
   cout << ans;
    return 0;

}


