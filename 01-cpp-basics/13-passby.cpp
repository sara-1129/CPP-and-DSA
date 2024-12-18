#include<bits/stdc++.h>
using namespace std;


//pass by value -- > Pass a copy rather than original value
void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num <<endl;
    num += 5;
    cout << num << endl;
}

//pass by reference -->Get it from the original address
void doSomething2(string &s)
{
    s[0] = 'N';
    cout << s << endl;
}

int main()
{
    int num = 10;
    doSomething(num);

    cout << num << endl;



 string s = "raj";
  doSomething2(s);
  cout << s << endl;
}

//If we pass a array to a function  it always gets passed by reference