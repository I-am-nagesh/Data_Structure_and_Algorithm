#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //  priority_queue<int>p;    //max heap

    //  p.push(10);
    //  p.push(20);
    //  p.push(11);
    //  p.push(18);
    //  p.push(15);
     
    //  cout<<p.top()<<" ";

    //  //delete
    //  p.pop();
    //  cout<<p.top()<<" ";

    //  //size
    //  cout<<p.size()<<endl;

    //  while(!p.empty()){
    //     cout<<p.top()<<" ";
    //     p.pop();
    //  }

    priority_queue<int, vector<int>, greater<int> >p;   //min heap
       
     p.push(10);
     p.push(20);
     p.push(11);
     p.push(18);
     p.push(15);

     cout<<p.top()<<" ";

     while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
     }

     
}