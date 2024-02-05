#include<iostream>
using namespace std;

//implement it with array
class Stack{
    int *arr;
    int size;
    int top;

    public:

    //constructor
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }

    //push
    void push(int value){
        if (top == size - 1){
            cout<<"Stak Overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" into the stack"<<endl;
        }
    }

    //Pop
    void pop (){
        if(top == -1){
            cout<<"Stack Underlflow"<<endl;
        }
        else{
            cout<<"Popped "<<arr[top]<<" from the stack"<<endl;
            top--;   
        }
    }
    
    //Peek
    int Peek(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
           return arr[top];
        }
    }

    //IsEmpty
    bool IsEmpty(){
        return top == -1;
    }

    //IsSize
    int IsSize(){
        return top+1;
    }
};

int main(){
    Stack S(5);
    S.push(5);
    S.push(6);
    S.push(8);
    cout<<S.Peek()<<endl;
    S.pop();
    cout<<S.Peek()<<endl;
    cout<<S.IsEmpty()<<endl;

}