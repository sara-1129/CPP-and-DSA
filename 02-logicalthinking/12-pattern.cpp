#include<bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
   for (int row = 0; row < 2*n-1; row++)
    {
        for (int col = 0; col < 2*n-1; col++)
        {
            int top =row;
            int left =col;
            int right = (2*n-2)- col;
            int down = (2*n-2)-row;

            cout << (n-min(min(top,down),min(left,right))) << " ";

        }
        cout << endl;
    }
}
int main()
{
printPattern(5);
}