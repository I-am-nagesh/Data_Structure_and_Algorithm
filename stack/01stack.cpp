#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    cout<<"adding 10 and 20 in stack"<<endl;
    s.push(10);
    s.push(20);
    
    cout<<"the top element is: "<<s.top()<<endl;

    cout<<"popping an element"<<endl;
    s.pop();
    cout<<"the top element is: "<<s.top()<<endl;

    cout<<"checking the stack is empty??"<<endl;
    cout<<s.empty()<<endl;

    cout<<"size of stack: "<<s.size()<<endl;

    
    return 0;
}