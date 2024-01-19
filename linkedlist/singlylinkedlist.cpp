#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    Node *Head, *Tail;
    Tail = Head = NULL;
    // Head = new Node();

    // cout<<Head->data<<endl;
    // cout<<Head->next<<endl;

    int arr[] = {2,4,6,8,10};

//     //insert the node at beginning

//     //linkedlist doesn't exist

//     for(int i = 0; i<5; i++)
//     {
//     if(Head == NULL){
//         Head = new Node(arr[i]);
//     }

//     //linkedlist exist
//     else{
       
//        Node* temp;
//        temp = new Node(arr[i]);
//        temp->next = Head;
//        Head = temp;
//     }
// }

//     //print the value
//     Node *temp = Head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }


    //insert the value at end
    for(int i = 0; i<5; i++){
        //linkedlist is empty
        if(Head == NULL){
            Head = new Node(arr[i]);
            Tail = Head;
        }
        //linkedlist
        else{
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    Node *temp;
    temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }




}