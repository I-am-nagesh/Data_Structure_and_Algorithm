#include<iostream>
using namespace std;

//concept of polymerphism is same as function overloading

class poly{
    public:
    int add(int a, int b){
        cout<<"sum of two number "<<a<<" and "<<b<<": "<<(a+b)<<endl;
    }
    int add(int a, int b, int c){
        cout<<"sum of three number "<<a<<","<<b<<" and "<<c<<": "<<(a+b+c)<<endl;
    }
};
int main(){
    poly obj;
    obj.add(5, 3);
    obj.add(12, 12, 12);
    return 0;

}