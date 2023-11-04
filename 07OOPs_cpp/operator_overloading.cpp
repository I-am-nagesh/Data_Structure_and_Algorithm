#include<iostream>
using namespace std;

class complexNumber {
    private:
    int real;
    int imaginary;

    public:
    complexNumber(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void print(){
        cout<< real <<" + i" << imaginary;
    }
    complexNumber operator+(complexNumber c2){
        complexNumber c3(0, 0);
        c3.real = this->real + c2.real;
        c3.imaginary = this->imaginary + c2.imaginary;
        return c3;
    }
};
int main(){
    complexNumber c1(3, 5);
    complexNumber c2(2, 4);
    complexNumber c3 = c1 + c2;
    c3.print();
    return 0;
}