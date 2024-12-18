#include<bits/stdc++.h>
using namespace std;

void printPattern1(int n)
{
    for (int row1 = 1; row1 <= n; row1++)
    {
        //Space
        for (int col1 = 1; col1 <= n-row1; col1++)
        {
            cout << "  ";
        
        }
        //stars
        for (int col2 = 1; col2 <=2 * row1 - 1; col2++)
        {
            cout << "*" <<" ";
        }
        cout << endl;
    }
}  
void printPattern2(int n)
{
    for (int row = 1; row <= n; row++)
    {
        //spaces
        for (int col1 = 1; col1 <= row - 1; col1++)
        {
            cout << "  " ;
        }
        //stars
        for (int col2 = 1; col2 <= 2*(n -row )+1; col2++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void printPattern3 (int n)
{
for (int row1 = 1; row1 <= n; row1++)
    {
        //Space
        for (int col1 = 1; col1 <= n-row1; col1++)
        {
            cout << "  ";
        
        }
        //stars
        for (int col2 = 1; col2 <=2 * row1 - 1; col2++)
        {
            cout << "*" <<" ";
        }
        cout << endl;
    }
     for (int row = 1; row <= n; row++)
    {
        //spaces
        for (int col1 = 1; col1 <= row-1+1; col1++)
        {
            cout << "  " ;
        }
        //stars
        for (int col2 = 1; col2 <= 2*(n -row )+1-2; col2++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern1(6);
    cout << endl;
    printPattern2(7);
    cout << endl;
    printPattern3(8);
}