#include<bits/stdc++.h>
using namespace std;

void printPattern1(int n)
{
    for (int row  = 1; row <= n; row++)
    {
        for (int col = 1;col <= row; col++)
        {
            if ((row+col) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

void printPattern2 (int n)
    {
        for (int row = 1; row <= n; row++)
        {
            for (int col1 = 1; col1 <= row ; col1++)
            {
                cout << col1 << " ";
            }
            for (int col2 = 1; col2 <= n-row ; col2++)
            {
                cout << "  ";
            }
            for (int col3 = 1; col3 <=n- row ; col3++)
            {
                cout << "  ";
            }
             for (int col1 = 1; col1 <= row ; col1++)
            {
                cout << row - col1 +1<< " ";
            }
            cout << endl;
        }
    }
    void printPattern3(int n)
    {
        int temp = 1;
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << temp << " ";
                temp++;
            }
            cout << endl;
        }
    }

int main()
{
   printPattern1(5); 
   printPattern2(4); 
   printPattern3(5);
}