#include<iostream>
using namespace std;

int main(){
    
    //defanging  an IP address
    string address = "1.1.1.1";
    string ans;
    int index = 0;

    while(index < address.size()){
        if(address[index]=='.')
        ans+="[.]";
        else
        ans+=address[index];

        index++;
    }
    cout<<ans;
    return 0;
}