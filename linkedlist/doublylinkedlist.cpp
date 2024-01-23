#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* previous;

    Node(int value){
        data = value;
        next = NULL;
        previous = NULL;
    }
};


    //function to calculate the length of linkedlist
    int lengthoflinkedlist(Node* head){
        Node* temp = head;
        int cnt = 0;
        //traverse the linkedlist and count nodes
        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }

    //function to check if a given element is present in the linkdelist
    int checkifpresent(Node* head, int desiredelement){
        Node* temp = head;
        //traverse the linkedlist
        while(temp != NULL){
            //check if current data is equL to the desired element
            if(temp->data == desiredelement)
            return 1;
            //move to the next node
            temp = temp->next;
        }
        return 0;
    }


int main(){

    int arr[] = {2,4,6,8,10};

    //inserting an array in linkedlist
     Node* head = new Node(arr[0]);
     head->previous = NULL;
     head->next = new Node(arr[1]);
     head->next->previous = new Node(arr[0]);
     head->next->next = new Node(arr[2]);
     head->next->next->previous = new Node(arr[1]);
     head->next->next->next = new Node(arr[3]);
     head->next->next->next->previous = new Node(arr[2]);
     head->next->next->next->next = new Node(arr[4]);
     head->next->next->next->next->previous = new Node(arr[4]);
     

     //printing the value of lunkedlist
     Node* temp;
     temp = head;
     while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     cout<<endl;


    //call lengthoflinkedlist function
     cout<<lengthoflinkedlist(head)<<endl;

    //call checkifpresent function
     cout<<checkifpresent(head, 12)<<endl;


    //middle of linkedlist
    int count = 0;
    Node* temp1 = head;
    while(temp1 != NULL){
        count++;
        temp1 = temp1->next;
    }
    count /= 2;
    temp1 = head;
    while(count--){
        temp1 = temp1->next;
    }
    cout<<temp1->data<<endl;



    return 0;
}


