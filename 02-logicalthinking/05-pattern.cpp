#include<bits/stdc++.h>
using namespace std;

void printPattern1(int n)
{
    for (int row = 1; row <= n ; row++)
    {
        for (int col = 1; col <= row; col++ )
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int row = 1; row <= n - 1 ; row++)
    {
        for (int col = 1; col <= n-row +1-1 ; col++ )
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main()
{
    printPattern1(6);
}