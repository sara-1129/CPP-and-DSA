#include <bits/stdc++.h>
using namespace std;
/*
A school has following rules for grading system:
a.Below 25 - F
b.25 to 44 - E
c.45 to 49 - D
d.50 to 59 - C
e.60 to 79 - B
f.80 to 100 -A
*/
int main()
{
    int marks;
    cout << "Enter your marks:";
    cin >> marks;
    if (marks < 25)
    {
        cout << "Your Grade : F";
    }
    else if (marks <= 44 )
    {
        cout << "Your Grade : E";
    }
    else if ( marks <= 49)
    {
        cout << "Your Grade : D";
    }
    else if (marks <=59 )
    {
        cout << "Your Grade : C";
    }
    else if (marks <=79 )
    {
        cout << "Your Grade : B";
    }
    else if (marks <=100 )
    {
        cout << "Your Grade : A";
    }
    else
    {
        cout << "Invalid marks";
    }

    return 0;
}