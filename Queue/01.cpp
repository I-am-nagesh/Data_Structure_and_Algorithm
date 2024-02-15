#include<iostream>
using namespace std;

// implementing queue using array
class Queue{
    int *arr;
    int front, rear, size;

    public:
    //constructor
    Queue( int n){

        arr = new int[n];
        front = -1, rear = -1;
        size = n;
    }

    //if Queue is empty or not
    bool IsEmpty(){
        return front == -1;
    }

    //if Queue is full or not
    bool IsFull(){
        return rear == size - 1;
    }

    // push element into queue, end
    void push (int x){
        //empty
        if(IsEmpty()){
            cout<<"Pushed "<<x<<" into the queue"<<endl;
            front = rear = 0;
            arr[0] = x;
            return;
        }
        //full
        else if(IsFull()){
             cout<<"Queue Overflow"<<endl;
             return;
        }

        //insert
        else{
            rear = rear + 1;
            arr[rear] = x;
            cout<<"Pushed "<<x<<" into the queue"<<endl;
        }
    }

    //pop element , starting
    void pop(){
        //empty
        if(IsEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }

        //pop
        else{
            if(front == rear){
                cout<<"Popped "<<arr[front]<<" from the queue"<<endl;
            front = rear = -1;
            }
            else{
                cout<<"Popped "<<arr[front]<<" from the queue"<<endl;
                front = front + 1;
            }
        }
    }

    //start me kaunsa element hai
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else return arr[front];
    }
};

int main(){
    
    Queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.pop();
    cout<<q.start()<<endl;
}