#include<iostream>
using namespace std;

class destructor{

    public:
    ~destructor()    //destructor take same name as class name
                     //it can not take any argument
    {
        cout<<"i am in oops lab";
    }
};
int main(){
    destructor d;     //creating object call destructor automatically
                      //it will be called....how many times i call
    return 0;

}