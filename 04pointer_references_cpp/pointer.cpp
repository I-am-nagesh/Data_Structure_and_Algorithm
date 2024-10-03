#include<iostream>
using namespace std;

//function to pass pointer
void fun(int* ptr4){
  *ptr4 = 5;
}

//function to swap two number using pointer
void swap(int*x, int*y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

//function to double value of element in array using pointer
void display(int* ptr5, int n){
  for(int i =0; i<n; ++i){
    cout<<(*(ptr5 + i))*2<<" ";
  }
  cout<<endl;
}


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
   cout<<(void*)&name<<endl;
     

   //passing pointer in function

   int x = 9;
   cout<<"value of x before calling function: "<< x <<endl;
   fun(&x);
   cout<<"value of x after calling function: "<< x <<endl;

   //swaping two number using pointer

   int p = 2, q = 5;
   cout<<"value of p and q before swaping: "<<p<<" "<<q<<endl;
   swap(&p, &q);
   cout<<"value of p and q after swapping: "<<p<<" "<<q<<endl;

   //twice the element of array using pointer

   int arr1[] = {1,2,3,4,5};
   int n = sizeof(arr1) / sizeof(int);

   //ptr5 will store the address of first block of array
   int* ptr5 = arr1;

   //passing argument to a function as pointer
   display(ptr5, n);
  

   //reference variable
   int num = 10;
   int &temp = num;   //num and temp are same
   cout<<temp<<endl;
   temp++;
   cout<<num<<endl;
  
   //verify reference vriable
   cout<<&temp<<endl;
   cout<<&num<<endl;
  
   //double pointer
   int z = 10;
   int *p1 = &z;
   int **p2 = &p1;
   cout<<z<<endl;
   *p1+=4;
   cout<<*p1<<endl;
   cout<<z<<endl;
   **p2+=10;
   cout<<**p2<<endl;
   cout<<z<<endl;


    return 0;
}