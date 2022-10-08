#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q){
    stack<int> st;
    while(!q.empty()){
        int val = q.front();
        st.push(val);
        q.pop();
    }
    while(!st.empty()){
        int val = st.top();
        q.push(val);
        st.pop();
    }
    return q;
}
int main()
{
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);
    queue<int> a = rev(q);
    while(!a.empty()){
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl;
    return 0;
}