#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>l;
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(80);
    l.push_front(15);
    l.pop_front();

    // cout<<l.front()<<" "<<l.back()<<endl;
    // cout<<l.size()<<" ";

    //itetrae in order
    for(auto it = l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }

    //iterate in reverse order
    for(auto it = l.rbegin(); it != l.rend(); it++){
        cout<<*it<<" ";
    }
}