#include<bits/stdc++.h>
using namespace std;

void printPattern1(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++ )
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void printPattern2(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++ )
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
void printPattern3(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++ )
        {
            cout << row << " ";
        }
        cout << endl;
    }
}
int main()
{
    printPattern1(7);
    printPattern2(5);
    printPattern3(6);
}