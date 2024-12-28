#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //list
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(); //{2, 4}

    //rest functions are same as vectors
    //begin, end, rbegin, rend, clear, insert, size, swap 


    //deque
                                                                                                            
    deque<int> dq;  
    dq.push_back(1); //  {1}
    dq.emplace_back(2); //{1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); //{3, 4, 1, 2}


    dq.pop_back();// {3, 4, 1}
    dq.pop_front(); //{4, 1}

    dq.back();

    dq.front();
    

    //stack

    stack<int> st;
    st.push(1);// {1}
    st.push(2); // {2, 1}
    st.push(3); //{ 3, 2, 1}
    st.push(3);//{3, 3, 2, 1}
    st.emplace(5);   //{5, 3, 3, 2, 1}     

    st.pop(); //st looks like {3, 3, 2, 1}  

    cout << st.top(); // prints 5  "** st[2] is invalid**"
    cout << st.size();// 4
    cout << st.empty();

    stack<int> st1,st2;
    st1.swap(st2);


    //queue
    queue <int> q;
    q.push(1);  // {1}
    q.push(2);  //{1, 2}
    q.emplace(4);   //{1, 2, 4}


    q.back() += 5;

    cout << q.back(); //prints 9

    // q is {1, 2, 9}

    cout << q.front(); // prints 1

    q.pop(); // {2, 9}

    cout << q.front(); // prints 2

    //size swap empty same as stack



    //priority queue
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10);//  {10, 8, 5, 2}

    cout << pq.top();







}