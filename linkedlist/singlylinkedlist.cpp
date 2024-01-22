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

   //function to calculate the length of linkedlist
        int lengthoflinkedlist(Node* Head){
            Node* temp = Head;
            int cnt = 0;
            //traverse the linkedlist and count nodes
            while(temp != NULL){
                temp = temp->next;
                cnt++;  //increment cnt for every node traversed
            }
            return cnt;
        }

    //function to check if a given element is present in the linkedlist
    int checkifpresent(Node* Head, int desiredelement){
    Node* temp = Head;

    //traverse the linkelist
    while(temp != NULL){
    //check if the current node data is equal to the desired element 
    if(temp->data == desiredelement)
    return 1; //return 1 if the element is found

    //move to the next node
    temp = temp->next;
    }
    return 0; //return 0 if the element is not found in the linkedlist
}




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

    // //print the value
    // Node *temp = Head;
    // while(temp != NULL){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }


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

//    //inserting element of array in linkedlist
//    Node *Head = new Node(arr[0]);
//    Head->next = new Node(arr[1]);
//    Head->next->next = new Node(arr[2]);
//    Head->next->next->next = new Node(arr[3]);
//    Head->next->next->next->next = new Node(arr[4]);


    //    //delete a Node at start
    // if(Head != NULL){
    //     Node *temp = Head;
    //     Head = Head->next;
    //     delete temp;
    // }

     
    // //delete a node at end
    // if(Head != NULL){
    //     //only one noede is present
    //     if(Head->next == NULL){
    //         Node *temp = Head;
    //         delete temp;
    //         Head = NULL;
    //     }
    //     //more than one node is present
    //     else{
    //         Node *curr = Head;
    //         Node *prev = NULL;

    //         //curr->next is not NULL

    //         while(curr->next != NULL){
    //             prev = curr;
    //             curr = curr->next;
    //         }

    //         prev->next = curr->next;
    //         delete curr;
    //     }
    // }


    //delete a node at specific location
    int x = 3;
    if( x == 1){
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }
    x--;
    Node *curr = Head;
    Node *prev = NULL;

    while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;


   //printing linkelist
    Node *temp;
    temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    // //call the lengthoflinkedlist function
    // cout<<endl<<lengthoflinkedlist(Head)<<endl;

    // int val = 8;  //element to be checked for presence in the linkedlist

    // //call the checkifpresent function
    // cout<<checkifpresent(Head, val)<<endl;



    return 0;



}