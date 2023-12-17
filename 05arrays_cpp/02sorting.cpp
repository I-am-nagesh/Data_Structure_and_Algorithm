//Sorting algorithms are used for rearranging the elements of an unsorted
//array or list so that all of its elements are either in ascending order
//or descending order. 

#include <bits/stdc++.h>
using namespace std;


//merge sort logic
//merge sort....works by dividing an array into smaller subarray,sorting each subarray,and then merging the sorted subarray

void merge(int arr[], int start, int mid, int end){

    vector<int>temp(end-start+1);
    int left = start, right = mid + 1, index = 0;

    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            index++, left++;
        }
        else{
            temp[index] = arr[right];
            index++, right++;
        }
    }
    //left array is not empty yet
    while(left<=mid){
        temp[index]=arr[left];
        index++, left++;
    }
    //right array is not empty yet
    while(right<=end){
        temp[index]=arr[right];
        index++, right++;
    }

    index = 0;
    //put these value in array
    while(start<=end){
        arr[start]=temp[index];
        start++, index++;
    }

}

void mergesort(int arr[], int start, int end){

    int mid = start + (end - start )/2;
    
    //left side
    mergesort(arr, start, mid);

    //right side
    mergesort(arr, mid + 1, end);

    merge(arr, start, mid, end);

}



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
//insertion sort.....works by dividing array into two parts,sorted and unsorted

// for(int i = 1; i<n; i++){
//     for(int j = i; j>0; j--){
//         if(arr[j] < arr[j-1])
//         swap(arr[j], arr[j-1]);
//         else
//         break;
//     }
// }



//calling mergesort function
mergesort(arr, 0, n-1);

//printing sorted array elements
cout<<"the sorted element of array in ascending order: ";
for(int i = 0; i<n; i++){
    cout<< arr[i] <<" ";
}
return 0;
}