#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){

    //create a queue
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);

    // //print all element of queue
    int n = q.size();
    // while(n--){
    //     cout<<q.front()<<" ";
    //     q.push(q.front());
    //     q.pop();
    // }
    // cout<<endl;

    //queue reversal
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
    //print element of queue
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;

    //delete
    q.pop();

    //front element
    cout<<q.front()<<endl;

    //back element
    cout<<q.back()<<endl;

    //size
    cout<<q.size()<<endl;

    //empty
    cout<<q.empty()<<endl;

    return 0;
}