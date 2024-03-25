#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//it store data in key value pair
//it uses red-black tree or avl for implementation
//insertion, deletion, and search operations have O(logn) time complexity

int main(){

    //map create
    map<int, int>m;
    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(20, 230));
    m.insert(make_pair(50, 30));

    m[100] = 60;  //create new one
    m[20] = 70;   //change existing one

    for(auto it = m.begin(); it != m.end(); it++){

        cout<<it->first<<" "<<it->second<<endl;
    }

}