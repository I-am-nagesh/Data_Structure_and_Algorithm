#include<iostream>
using namespace std;

int main(){

    int a = 10;   //actual variable declaratoin


    cout<< &a <<endl;  //printing address of variable a
    int *ptr = &a;     //pointer declaration with storing address of variable a
    cout << ptr <<endl; //printing address stored in ptr variable

    float m = 2.6;
    float *ptr1 = &m;
    cout<< ptr1 <<endl;
    cout <<*ptr1<<endl; //print value at address available in pointer

    //pointer with array
     int myNumber[4] = {25,50,75,100};

     for (int i = 0; i < 4; i++)
     {
       cout<<&myNumber[i]<<endl;  //printing array elements memory address
     }

     //another method to print memory address
     cout<<myNumber<<endl;
     cout<<myNumber + 0<<endl;
     
     int * ptr2 = myNumber;
     cout<<ptr2<<endl;
    //printing element of array using pointer method
     cout<<*myNumber<<endl;
     cout<<*(myNumber + 1)<<endl;
     cout<<*(myNumber + 2)<<endl;
     cout<<*(myNumber + 3)<<endl;

     //pointer with character array
    char arr[5] = "1234";
    cout<<arr<<endl;  //print character value as it is
    cout<<(void*)arr<<endl; //print memory address

    char *ptr3 = arr;
    cout<<(void*)ptr3<<endl;

   char name = 'a';
   cout<<(void*)&name;
     
    return 0;
}