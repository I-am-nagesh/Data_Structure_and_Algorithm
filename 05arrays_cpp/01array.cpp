#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    // int arr1[10];   //array declaration
    // for(int i=0; i<10; i++){
    //     cin>>arr1[i];
    // }
    // for (int i = 0; i < 10; i++)
    // {
    // cout<<arr1[i];
    // }
//  cout << INT_MAX << endl;
//     cout << INT_MIN;

    int arr2[5] = {2,3,4,5,6};
    //maximum value of array
    int ans1 = INT_MIN;
    //minimum value of array
    int ans2 = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if(arr2[i]>ans1){
            ans1 = arr2[i];
        }

        if(arr2[i]<ans2){
            ans2 = arr2[i];
        }
        // cout << ans;
    }
    cout << "maximum value of array: "<<ans1<<endl;
    cout << "minimum value of array: "<<ans2<<endl;
    cout <<sizeof(arr2)<<endl;
    cout <<sizeof(arr2) / sizeof(arr2[0])<<endl;

  //serach element in array
  int index = -1;
  int x;
  cout << "enter a number which is either present or absent in an array: ";
  cin >> x;
  for(int i = 0; i<5; i++){
    if(arr2[i] == x){
        index = i;
        break;
    }
  }
   cout <<"index of given number is "<< index <<endl;

   //reverse array
   int start=0, end=4;
   while(start < end){
    swap(arr2[start],arr2[end]);
    start++;
    end--;
   };
   for(int i = 0; i<5; i++){
   cout<<arr2[i]<<" ";
   }

   //second maximum array
   int second;
   for (int i = 0; i < 5; i++)
   {
    if (arr2[i] != ans1)
    second  = max(second, arr2[i]);
   }
   cout << second;

   
   
    return 0;
}