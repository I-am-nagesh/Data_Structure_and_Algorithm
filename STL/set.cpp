#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//only unique value will be sorted
//store value in sorted order(ascending)
//insertion, deletion, and search operation have O(log n)...
//implemented using red-black-tree
//it can be sort in descending order too

class Person{
    public:
    int age;
    string name;

    bool operator < (const Person &other) const{
        return age<other.age;
    }
};

int main(){

    // set<int, greater<int> >s;

    // //insert
    // s.insert(10);
    // s.insert(20);
    // s.insert(110);
    // s.insert(100);
    // s.insert(10);
    // s.insert(20);
    // s.insert(10);
    // s.insert(110);
    // s.insert(210);

    //delete


    // //search the element

    // if(s.find(110) != s.end())
    // cout<<"present\n";
    // else
    // cout<<"absent\n";

    // //count

    // if(s.count(210))
    // cout<<"present";
    // else
    // cout<<"absent";

    // cout<<s.count(280)<<" ";

    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout<<*it<<endl;
    // }

    set<Person>s;
    Person p1, p2, p3;
    p1.age = 10, p1.name = "rohit";
    p2.age = 30, p2.name = "mohit";
    p3.age = 5, p3.name = "sohit";

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);

    for(auto it = s.begin(); it != s.end(); it++){
        cout<<it->age<<" "<<it->name<<endl;
    }

}