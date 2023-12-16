//Sorting algorithms are used for rearranging the elements of an unsorted
//array or list so that all of its elements are either in ascending order
//or descending order. 

#include <bits/stdc++.h>
using namespace std;
int main(){


int arr[1000];
int n;
cout<< "Enter the size of array: ";
cin>>n;
cout<<"Enter the element in array: ";
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}

//selection sort logic
// selection sort.... uses in-place comparison to rearrange elements in several rounds or iterations.

// for(int i = 0; i<n-1; i++){
//    int index = i;
//    for(int j = i+1; j<n; j++){
//     if(arr[j] < arr[index])
//     index = j;
//    }
//     swap(arr[index], arr[i]);
// }


//bubble sort logic
//bubble sort....works by repeatedly swapping the adjacent elements if they are in wrong order

// for(int i = n-2; i>=0; i--){
//     for(int j = 0; j<=i; j++){
//         if(arr[j] > arr[j+1]){
//             swap(arr[j], arr[j+1]);
//         }
//     }
// }


//insertion sort logic
//
cout<<"the sorted element of array in ascending oreder: ";
for(int i = 0; i<n; i++){
    cout<< arr[i] <<" ";
}
return 0;
}