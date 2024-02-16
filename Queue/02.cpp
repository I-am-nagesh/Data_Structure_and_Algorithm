#include<iostream>
#include<queue>
using namespace std;

int main(){

    //create a queue
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);

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