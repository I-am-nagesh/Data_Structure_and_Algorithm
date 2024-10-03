#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //pre-compute
    map<int, int>mpp;      //it will be in sorted order, if use unordered_map it will be unsorted
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    //iterate in the map
    for(auto it: mpp){
        cout<< it.first<<"->"<<it.second<<endl;
    }

}