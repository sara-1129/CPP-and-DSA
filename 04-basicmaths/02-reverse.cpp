#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;

	int ans = 0;
	
	if (n ==0){
		cout << ans;
	}
	else{
		// while (n % 10 == 0)
		// {
		// 	n = n / 10;
		// }


        //The above peice of code is for optimisation 
        //the code also runs fine without it

	while(n != 0)
	{
		while (n % 10 == 0)
		{
			n = n / 10;
		}
		int digit = n % 10;
		ans = ans * 10 + digit;
		n = n / 10;
	}
	cout << ans;
	}
	
    return 0;
}
