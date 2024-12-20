#include<bits/stdc++.h>
using namespace std;
//print square
void printPattern(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || col == 1 || col == n || row == n)
            {
                cout << "*" <<" ";
            }
            else
            {
                cout <<"  ";
            }

        }
        cout << endl;
    }
}
int main()
{
printPattern(6);
}