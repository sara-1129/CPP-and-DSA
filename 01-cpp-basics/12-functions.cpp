#include<bits/stdc++.h>
using namespace std;
//functions are set of code which performs something for you
//functions are used to modularise code 
//functions are used to increase readability
//functions are used to use same code multiple time
//void
//return
//parameterised
//non parameterised

void printName(string name) //Function to print name
{
     cout << "Hey " << name << endl;
}

int twoSum(int num1, int num2) // Function to print sum of two numbers
{
     return num1 +num2;

}


int main()
{
   printName("Sara");
   printName("Striver");

  int  result = twoSum(5,6);
  cout << result ;
    return 0;
}