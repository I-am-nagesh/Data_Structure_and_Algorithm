#include<iostream>
using namespace std;

//function overloading -->function with same name but different parameters

void add (int a, int b){
    cout<<"sum= "<<(a+b)<<endl;
}
void add (int a, int b, int c){
    cout<<"sum= "<<(a+b+c)<<endl;
}

 // friend function
 class MyClass {
    private:
    int member1 = 5;

    friend int F(Myclass& d);
 };
 int F(MyClass& d){
    cout<<d.member1<<endl;
    return 0;
 }
//  friend function -->that allow access of private member


//driver code
int main(){

    add(10,2);
    add(5,6,4);

    MyClass obj;
    //error! cannot access private members from here
    F(obj);


    return 0
}