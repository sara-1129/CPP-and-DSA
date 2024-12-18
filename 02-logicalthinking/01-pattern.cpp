#include<bits/stdc++.h>
using namespace std;

//For the outer loops,count the number of lines
//for the inner loop,focus on thte columns &connectthem with the number of rows somehow
//Whatever you are printing ,print them inside the innner for loop
//Observe symmetry [OPTIONAL]

//Function to print pattern;
void printPattern(int n)
{
  for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
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