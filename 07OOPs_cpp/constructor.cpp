#include<iostream>
using namespace std;

class construct {
    public:
    construct()    // it takes same name as of class name
                   // it can take argument
    {
        cout<<"i am in oops lab";
    }
};

int main(){
    construct s,p,r;  //creating object call constructor automatically
                      //it will be called ..how many times i call
    return 0;

}