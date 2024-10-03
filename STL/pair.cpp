#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){


    // pair<string, int>p;

    // //two method to insert

    // p = make_pair("rohit", 30);

    // // p.first = "rohit";
    // // p.second = 30;

    // cout<<p.first<<" "<<p.second<<endl;

    //name, age, weight

    pair<string, pair<int, int> >p;
    // p.first = "rohit";
    // p.second.first = 25;
    // p.second.second = 80;

    p = make_pair("rohit", make_pair(25, 80));

    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

}
