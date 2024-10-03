#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}


int main(){
   int arr[] = {2,3,4,5,6,7,8,9};
   int n = 8;
   int k = 3;

   queue<int>q;
   //k - 1 eleent ko pusk kro queue ke andar
   for(int i = 0; i < k - 1; i++)
   q.push(arr[i]);

   for(int i = k - 1; i < n; i++){
    q.push(arr[i]);
    display(q);
    q.pop();
   }

   return 0;
}