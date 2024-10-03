#include<iostream>
#include<vector>
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


    //inserting a node at beginning
    if(head == NULL){
        head = new Node(0);
    }
     Node* temp6 = new Node(0);
     head->previous = temp6;
     temp6->next = head;
     temp6->previous = NULL;
     head = temp6;
     

    //inserting a node at end
     Node* curr = head;
     while(curr->next != NULL){
        curr = curr->next;
     }
     Node* temp7 = new Node(12);
     temp7->next = NULL;
     temp7->previous = curr;
     curr->next = temp7;


    //delete node at beginning
    if(head != NULL){
        Node* temp8 = head;
        head = head->next;
        delete temp8;
        head->previous = NULL;
    }

    //delete node at end
    

     

    //printing the value of linkedlist
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

    //middle of linkedlist using slow and fast pointer
    Node* slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data<<endl;


    //reverse linkelist
    vector<int>ans;
    Node* temp2 = head;
    while(temp2 != NULL){
        ans.push_back(temp2->data);
        temp2 = temp2->next;
    }
    int i = ans.size() - 1;
    temp2 = head;
    while(temp2){
        temp2->data = ans[i];
        i--;
        temp2 = temp2->next;
    }
    //printing the value of linkedlist
     cout<<"reversed linkedlist: ";
     Node* temp3;
     temp3 = head;
     while(temp3){
        cout<<temp3->data<<" ";
        temp3 = temp3->next;
     }
     cout<<endl;

    // //delete a Node at start
    // if(head != NULL){
    //     Node* temp4 = head;
    //     head = head->next;
    //     head->previous = NULL;
    //     delete temp4;
    // }
    
    // //delete a node at end
    // if(head != NULL){
    //     if(head->next == NULL){
    //         Node* temp5 = head;
    //         delete temp5;
    //         head = NULL;
    //     }
    //     //more than one node is present
    //     else{
    //         Node* curr = head;
    //         Node* prev = NULL;
    //         //curr->next is not NULL
    //         while(curr->next != NULL){
    //             prev = curr->previous;
    //             curr = curr->next;
    //         }
    //         prev->next = NULL;
    //         curr->previous = NULL;
    //         delete curr;
    //     }
    // }



    //printing the value of linkedlist
     Node* temp0;
     temp0 = head;
     while(temp0){
        cout<<temp0->data<<" ";
        temp0 = temp0->next;
     }
     cout<<endl;
    return 0;
}


