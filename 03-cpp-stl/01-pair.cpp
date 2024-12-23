#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,double> p ={1, 3.4};

    cout << p.first <<" " << p.second;
    cout << endl;
    pair<int,pair <int,int>> q = {1,{3,4}};

    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int,int> arr[] = {{1, 4}, {2, 5}};

    cout << arr[0].second;




    return 0;
}