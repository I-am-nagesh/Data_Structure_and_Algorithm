#include<iostream>
using namespace std;
 
 class Node{
    public:
    int data;
    Node *left, *right;

    Node (int value){
        left = right = NULL;
        data = value;
    }
 };

 //traversal
 //preorder traverasal---(NLR)
 void preOrder(Node *root){
    if(root == NULL)
    return;
    //Node
    cout<<root->data<<" ";
    //left
    preOrder(root->left);
    //right
    preOrder(root->right);
 }

 //Inorder traversal---(LNR)
 void InOrder(Node *root){
    if(root == NULL)
    return;
    //left
    InOrder(root->left);
    //node
    cout<<root->data<<" ";
    //right
    InOrder(root->right);
 }

 //PostOrder traversal---(LRN)
 void postOrder(Node *root){
    if(root == NULL)
    return;
    //left
    postOrder(root->left);
    //right
    postOrder(root->right);
    //node
    cout<<root->data<<" ";
 }


 Node *BinaryTree(){
    int x;
    cin>>x;
    if(x == -1)
    return NULL;

    Node *temp = new Node(x);
    //left side create
    cout<<"enter the left child of "<<x<<" :";
    temp->left = BinaryTree();
    //right side create
    cout<<"enter the right child of "<<x<<" :";
    temp->right = BinaryTree();
    return temp;

 }

 int main(){
    
    cout<<"enter the root Node: ";
    Node *root;
    root = BinaryTree();

    //print preOrder
    cout<<"Pre-Order: ";
    preOrder(root);
    cout<<endl;


    //print inOrder
    cout<<"In-Order: ";
    InOrder(root);
    cout<<endl;


    //print postOrder
    cout<<"Post-Order: ";
    postOrder(root);
    cout<<endl;

    
 }
