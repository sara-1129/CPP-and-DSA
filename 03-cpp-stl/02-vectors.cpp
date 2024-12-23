#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({3, 4});
    vec.emplace_back(2, 5); // We don't need to add curly braces in emplaceback to identify a pair

    vector<int> v3(5);

    vector<int> v1(5,20);//{20, 20, 20, 20, 20}
    vector<int> v2(v1); //COPYING v1 to v2


    vector<int>::iterator it = v.begin();

    cout << *(it) << endl;
    it++;
    cout << *(it) << endl;
    vector<int>::iterator it1= v.end(); //oints to posPtion next to last element

    cout << v[0] << endl;
    /*NOT IMPORTANT
    vector<int>::iterator it = v.rend(); //reverse end //oints to posPtion before first element

    vector<int>::iterator it = v.rbegin(); //Point to last element

    */


for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
{
    cout << *(it) << " ";
}
cout << endl;

for(auto it = v.begin(); it != v.end(); it++) //shorter form
{
    cout << *(it) << " ";
}
cout << endl;


for(auto it:v1)   //short form
{
    cout <<it<< " ";
}
cout << endl;


   //If we write ""auto"" in place of the datatype it is automatically assigned according to the data

    v1.erase(v1.begin()+2); //erases the 3rd element
    v1.erase(v1.begin()+1, v1.begin()+3); //erases 2nd and 3rd element //here the last written address is not included



    //Inserting elements
    vector<int> v4;

     vector<int> copy(2, 50);
    v4.insert(v4.begin(), copy.begin(), copy.end()); //inserts copy at the beginning of v4

    v4.insert(v4.begin()+2, 10); //inserts 10 at 3rd position
    v4.insert(v4.begin()+2, 3,4);//inserts 4,4,4 at 3rd position


    for(auto it:v4)   //short form
    {
        cout << it << " ";
    }
    cout << endl;

    cout << v4.size() << endl;

    v4.pop_back(); //removes the last element
    return 0;

    v4.swap(v1); //swaps the elements of v1 and v4


    v4.clear(); //removes all the elements of v4;

    cout << v4.empty() << endl; //returns 1 if empty else 0
}