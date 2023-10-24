#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //create vector, declare
    vector<int>v;
    vector<int>v1(5, 1);
    //size and capacity
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;
    //update value
    v[1]=5;
    cout<<"size of v1: "<<v1.size()<<endl;
    cout<<"capacity of v1: "<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"size of v1: "<<v1.size()<<endl;
    cout<<"capacity of v1: "<<v1.capacity()<<endl;
    //delete value from vector
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(41);
    v2.push_back(14);
    v2.push_back(42);
    v2.push_back(84);
    v2.pop_back();
    cout<<"size of v2: "<<v2.size()<<endl;
    cout<<"capacity of v2: "<<v2.capacity()<<endl;
    
    v2.erase(v2.begin()+1);
    cout<<"size of v2: "<<v2.size()<<endl;
    cout<<"capacity of v2: "<<v2.capacity()<<endl;
    for(int i = 0; i<v2.size(); i++)
    cout<<v2[i]<<" ";
    v2.insert(v2.begin()+1, 50);
    cout<<endl;
    for(int i = 0; i<v2.size(); i++)
    cout << v2[i]<<" ";

    v2[1] = 37;
    for(int i=0; i<v2.size(); i++)
    cout<<v2[i]<<" ";
    cout<<endl;
    v2.clear();  //remove all elements
    cout<<"size of v2: "<<v2.size()<<endl;
    cout<<"capacity of v2: "<<v2.capacity()<<endl;

    vector<int>v3;
    v3.push_back(2);
    v3.push_back(12);
    v3.push_back(22);
    v3.push_back(122);
    cout<<v3[0]<<endl;
    cout<<v3.front()<<endl;
    cout<<v3[v3.size()-1]<<endl;
    cout<<v3.back()<<endl;

    vector<int>a;
    //copy value of one vector to another

    a = v3;
    cout<<a.size();
    cout<<endl;
    for(auto it = v3.begin(); it!=v3.end(); it++)

{
    cout<<*it<<" ";
}
cout<<endl;
for(auto i:v3)
cout<<i<<" ";
cout<<endl;

vector<int>v4;
v4.push_back(5);
v4.push_back(235);
v4.push_back(15);
v4.push_back(54);
v4.push_back(125);

//sort in increasing order
sort(v4.begin(),v4.end());
for(int i = 0; i<v4.size(); i++)
cout<<v4[i]<<" ";
cout<<endl;
//sort in decreasing order
sort(v4.rbegin(),v4.rend());
for(int i=0; i<v4.size(); i++)
cout<<v4[i]<<" ";

//binary search
cout<<binary_search(v4.begin(), v4.end(), 55)<<endl;
cout<<find(v4.begin(),v4.end(),54)-v4.begin()<<endl;

    return 0;
}