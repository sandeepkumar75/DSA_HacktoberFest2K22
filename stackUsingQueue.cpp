#include<iostream>
#include<queue>
using namespace std;
class stack{
private:
    queue<int> q;
public:
    void push(int x){
        int s = q.size();
        q.push(x);
        while(s--){
            q.push(q.front());
            q.pop();
        }
    }
    int pop(){
        if(isEmpty())
            return -1;
        int top = q.front();
        q.pop();
        return top;
    }
    int top(){
        if(isEmpty())
            return -1;
        return q.front();
    }
    bool isEmpty(){
        return q.size() ? false : true;
    }
};

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}
