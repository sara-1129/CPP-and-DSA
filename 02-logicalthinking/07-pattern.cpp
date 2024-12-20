#include<bits/stdc++.h>
using namespace std;

 void printPattern1(int n)
{
     
        for (int row = 1; row <= n; row++)
        {
            // char temp = 'A';
            for (int col = 1; col <= row; col++)
            {
                cout << char('A'+col-1) << " ";
                //cout << temp << " ";
                //temp++;
            }
            cout << endl;
        }
}

void printPattern2(int n)
{
     for (int row = 1; row <= n; row++)
        {
            //char temp = 'A';
            for (int col = 1; col <= n-row+1; col++)
            {
                cout << char('A'+col-1) << " ";
                //cout << temp << " ";
                //temp++;
            }
            cout << endl;
        }
}

 void printPattern3(int n)
{
     //char temp = 'A';
        for (int row = 1; row <= n; row++)
        {
            
            for (int col = 1; col <= row; col++)
            {
                //cout << temp << " ";
                cout << char('A'+row -1) << " ";
            }
            cout << endl;
            //temp++;
        }
}

void printPattern4(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col1 = 1; col1 <= n-row; col1++)
        {
            cout << "  ";
        }
        for (int col2 = 1; col2 <= row; col2++)
        {
            cout << char('A'+col2 -1) << " ";
        }
        for (int col3 = 1; col3 <= row-1; col3++)
        {
            cout << char('A'+row-col3 -1) << " ";
        }
        cout << endl;

    }
}
int main()
{
    printPattern1(7);
    cout << endl;
    printPattern2(7);
    cout << endl;
    printPattern3(5);
    cout << endl;
    printPattern4(5);
}