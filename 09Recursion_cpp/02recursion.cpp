#include<iostream>
using namespace std;

//printing element of array using recursion
void print(int arr[], int index, int n){

    //base case
    if(index ==n)
    return;

    //recursive case
    cout<<arr[index]<<" ";
    print(arr, index+1,n);
}


//printing reverse array
void print1(int arr[], int index){

    //base case
    if(index == -1)
    return;

    //reursive case
    cout<<arr[index]<<" ";
    print1(arr, index-1);
}

   //sum of elementt of array
   int sum(int arr[], int index, int n){
    
    if(index==n)
    return 0;

    return arr[index]+sum(arr,index+1, n);

   }


   //minimum element in array
   int minelement(int arr[], int index, int n){
    if(index == n-1)
    return arr[index];

    return min(arr[index], minelement(arr,index+1,n));
   }

    //driver code

int main(){

    int arr[] = {3,4,1,2,8};

    cout<<"element of array: ";
    print(arr,0,5);
    cout<<endl;

    //printing reverse array 
   
    cout<<"element of reverse array: ";
    print1(arr,4);
    cout<<endl;

    cout<<"sum of element of array: "<<sum(arr,0,5)<<endl;

    cout<<"minimum element of array: "<<minelement(arr,0,5)<<endl;


}