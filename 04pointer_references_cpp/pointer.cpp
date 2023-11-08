#include<iostream>
using namespace std;

int main(){

    //pointer are symbolic representation of addresses
    int var = 20;

    //declare pointer variable
    int* ptr;

    //note that data type of ptr and var must be is_same
    ptr = &var;
    
    //assign the address of a variable to a pointer
    cout<<"value at ptr = "<< ptr <<endl;
    cout<<"value at var = "<< var <<endl;
    cout<<"value at *ptr = "<< *ptr <<endl;

    return 0;
}