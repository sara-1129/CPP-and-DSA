#include<bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col1 = 1; col1 <= row; col1++)
        {
            cout << "*" << " ";
        }
        for(int col2 = 1; col2 <= n-row; col2++)
        {
            cout << "  ";
        }
        for(int col3 = 1; col3 <= n-row; col3++)
        {
            cout << "  ";
        }
        for (int col4 = 1; col4 <= row; col4++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int row = 1; row <= n-1; row++)
    {
        for (int col1 = 1; col1 <=n-row; col1++)
        {
            cout << "*" << " ";
        }
        for(int col2 = 1; col2 <= row; col2++)
        {
            cout << "  ";
        }
        for(int col3 = 1; col3 <= row; col3++)
        {
            cout << "  ";
        }
        for (int col4 = 1; col4 <=n - row; col4++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main()
{
printPattern(5);
}