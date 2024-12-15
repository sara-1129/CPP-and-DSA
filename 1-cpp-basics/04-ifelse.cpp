#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a program that takes an input of age
    // and prints if your are an adult on not

    int age;
    cout << "Enter your age:";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult";
    }
    else
    {
        cout << "You are not an adult";
    } //It is not mandatory to have an else statement
    return 0;
}