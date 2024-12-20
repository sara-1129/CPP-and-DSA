#include<bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int row = 1; row <=n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << char('A'+ n +col-row-1) << " ";
        }
        cout << endl;
    }
}
int main()
{
    printPattern(5);
}