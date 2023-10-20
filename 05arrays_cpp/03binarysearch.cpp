#include<bits/stdc++.h>
using namespace std;

// int binarysearch(int arr[], int n, int key)
// {
    //start, end, mid
//     int start = 0, end = n-1, mid;

//     while(start <= end)
//     {
//        //mid ko find karo
//        mid = (start + end)/2;
//        //arr[mid]==key
//        if(arr[mid]==key)
//        return mid;
//        //arr[mid]<key
//        else if(arr[mid]<key)
//        start = mid + 1;
//        //arr[mid]>key
//        else
//        end = mid - 1; 
//     }
//     return -1;
// }
    int binarysearch(int arr[5], int key){
        int start = 0, end = 4, mid;
        while(start <= end){
            mid = start + (end - start)/2;
            if(arr[mid]==key)
            return mid;
            else if(arr[mid]<key)
            start = mid + 1;
            else 
            end = mid - 1;

        }
        return -1;
    }


int main(){
    // int arr[1000];
    // int n;
    // cout << "enter the number of element in array: ";
    // cin >> n;
    // cout << "enter the elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int key;
    // cout << "enter the key: ";
    // cin >> key;
    
    // cout << binarysearch(arr, n, key);

    int arr[5] = {30,28,20,16,4};
    int key = 28;
    cout<< binarysearch(arr,key);

   return 0; 
}

