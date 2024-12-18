#include <bits/stdc++.h>
using namespace std;

void printPattern1(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = n-row+1; col >= 1; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern2(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n-row+1; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern1(3);
    printPattern2(5);
}
