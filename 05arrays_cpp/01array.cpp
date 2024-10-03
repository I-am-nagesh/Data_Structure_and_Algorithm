#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    int arr1[5];   //array declaration
    cout<<"give 5 element of array: ";
    for(int i=0; i<5; i++){
        cin>>arr1[i];
    }
    cout<<"your given array is: ";
    for (int i = 0; i < 5; i++)
    {
    cout<<arr1[i]<<" ";
    }
    cout<<endl;

    //maximum value of array
    int ans1 = INT_MIN;
    //minimum value of array
    int ans2 = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if(arr1[i]>ans1){
            ans1 = arr1[i];
        }

        if(arr1[i]<ans2){
            ans2 = arr1[i];
        }
    
    }
    cout << "maximum value of array: "<<ans1<<endl;
    cout << "minimum value of array: "<<ans2<<endl;
    cout <<"size of array: "<<sizeof(arr1)<<endl;
    cout <<"size of array: "<<sizeof(arr1) / sizeof(arr1[0])<<endl;

  //serach element in array
  int index = -1;
  int x;
  cout << "enter a number which is either present or absent in an array: ";
  cin >> x;
  for(int i = 0; i<5; i++){
    if(arr1[i] == x){
        index = i;
        break;
    }
  }
   cout <<"index of given number is "<< index <<endl;

   //reverse array
//    cout<<"reverse array: ";
//    int start=0, end=4;
//    while(start < end){
//     swap(arr1[start],arr1[end]);
//     start++;
//     end--;
//    };
//    for(int i = 0; i<5; i++){
//    cout<<arr1[i]<<" ";
//    }

   //second maximum element in array
   int second = INT_MIN;
   for (int i = 0; i < 5; i++)
   {
    if (arr1[i] != ans1)
    second  = max(second, arr1[i]);
   }
   cout <<"second maximum element in array: "<<second<<endl;

   //fibonacci series
   cout<<"printing fibonacci series"<<endl;
   int n;
   cout<<"enter the number of terms: ";
   cin>>n;
   int fib[n];
   fib[0] = 0;
   fib[1] = 1;
   for(int i = 2; i<n; i++){
    fib[i] = fib[i - 1] + fib[i - 2];
   }
   cout<<"fibonacci series: ";
   for(int i = 0; i<n; i++){
    cout<< fib[i]<<" ";
   }
   
    return 0;
}