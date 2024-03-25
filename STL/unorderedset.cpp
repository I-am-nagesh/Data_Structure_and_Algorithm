#include<iostream>
#include<unordered_set>
using namespace std;

//it contains only unique elements
// serach, insert and removal have average constants time complexity
// it uses hashing technique to achieve it

int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(15);
    s.insert(11);
    s.insert(10);

    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }
}
