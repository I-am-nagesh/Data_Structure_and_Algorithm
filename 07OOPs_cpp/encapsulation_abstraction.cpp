

//encapsulation---> it helps to hide data of a class from other functions and classes.

#include<iostream>
using namespace std;

class EncapsulationExample {
    private:
    int x;
    public:
    void setX(int a){
        x = a;
    }
    int getX(){
        return x;
    }
};

int main(){
    EncapsulationExample obj;
    obj.setX(5);
    cout<<"The value of x is: "<<obj.getX();
    return 0;
}

//   the public member function setX() and getX() are labeled as public,
//   so that they can be accessed by other functions and classes
//   by making x private, we ensure that only member functions of class can 
//   access its data, which result in data hiding