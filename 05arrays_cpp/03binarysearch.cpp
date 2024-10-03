#include<bits/stdc++.h>
using namespace std;

//binary search....works by repeatedly dividing the search space in half and comparing the middle element with the target value

//the data structure must be sorted

int binarysearch(int arr[], int n, int key)
{
    int start = 0, end = n-1, mid;
       while(start <= end)
    {
       //mid ko find karo
       mid = start + (end - start)/2;
    
       if(arr[mid]==key){
          cout<<"the position of your mention element is: ";
          return mid;
       }

       else if(arr[mid]<key)
       start = mid + 1;
       
       else
       end = mid - 1; 
    }
    return -1;
}
   

int main(){

    int arr[1000];
    int n;
    cout << "enter the number of element in array: ";
    cin >> n;
    cout << "enter the elements in ascending order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter the element whose position you want: ";
    cin >> key;
    
    cout << binarysearch(arr, n, key);

   return 0; 
}

