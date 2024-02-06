#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Stack{
     Node *top;
     int size;

     public:
     Stack(){
        top = NULL;
        size = 0;
     }

    //push
    void push(int value){
        Node *temp = new Node(value);
        if(temp == NULL){
            cout<<"Stack overflowed"<<endl;
            return;
        }
        else{
        temp->next = top;
        top = temp;
        size++;
        cout<<"pushed "<<value<<" into the stack"<<endl;
        }
    }

    //pop
    void pop(){
        if(top == NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
            Node *temp = top;
            cout<<"popped "<<top->data<<" from the stack"<<endl;
            top = top->next;
            delete temp;
            size--;
        }
    }

    //peek
    int peek(){
        if(top == NULL){
            cout<<"Stack is Empty"<<endl;
        return -1;
    }
    else{
        return top->data;
    }
    }

    //IsEmpty
    bool IsEmpty(){
        return top == NULL;
    }

    //IsSize
    int IsSize(){
        return size;
    }

};


int main(){

   Stack S;
   S.push(6);
   S.push(16);
   S.push(62);
   S.push(86);
   S.pop();
   cout<<S.IsSize()<<endl;
   cout<<S.peek()<<endl;
   cout<<S.IsEmpty()<<endl;
}