#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here
	int temp1 = n ;
	int count = 0;
	while (temp1 != 0)
	{
		temp1 = temp1 / 10;
		count++;
	}
	int temp2 = n;
	int ans = 0;
	while (temp2 != 0)
	{
		int digit = temp2 % 10;
		ans = ans + pow (digit,count);
		temp2 = temp2 / 10;	
	}

	if (ans == n)
	{
		return true;
	}
	return false;
}

int main(){
    int n;
    cin >> n;
    bool check = checkArmstrong(n);
    if (check)
    {
        cout << n << " is armstrong number";
    }
    else
    {
        cout << n << " is not armstrong number";
    }
    return 0;
}