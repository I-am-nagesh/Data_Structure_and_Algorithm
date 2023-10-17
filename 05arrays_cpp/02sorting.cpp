//Sorting algorithms are used for rearranging the elements of an unsorted
//array or list so that all of its elements are either in ascending order
//or descending order. 

#include <bits/stdc++.h>
using namespace std;
int main(){
// selection sort.... uses in-place comparison to rearrange elements in several rounds or iterations.

int arr[1000];
int n;
cout<< "Enter the size of array: ";
cin>>n;
cout<<endl<<"Enter the element in array: ";
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}

for(int i = 0; i<n-1; i++){
   int index = i;
   for(int j = i+1; j<n; j++){
    if(arr[j] < arr[index]);
    index = j;
   }
    swap(arr[i], arr[index]);
}

for(int i = 0; i<n; i++){
    cout << arr[i] <<" ";
}
return 0;
}