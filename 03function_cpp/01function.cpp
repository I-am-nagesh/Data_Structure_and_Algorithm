#include<iostream>
using namespace std;


int sum(int m, int n)   // function declare with multiple parameter
{
    int ans = m+n;      //function define
    return ans;
}

//prime number code

bool prime(int n){
    if (n<2)
    return 0;

    for(int i=2; i<n; i++){
        if(n%i==0)
        return 0;
    }

    return 1;
    
}

//factorial of a number

int fact(int n = 3){  //function with default parameter
    int ans = 1;
    for(int i =1; i<=n; i++){
        ans = ans * i;
    }
     return ans;
}

void incr1(int n)   //function...pass by value
{ 
    n++;
}

void incr2(int &n)  //function...pass by reference
{
    n++;
}

// function to swap two number

void swap( int &a, int &b)  //function to swap two number using paass by reference
{
    int c;
    c = a;
    a = b;
    b = c;
}
int main(){
    int a,b;
    cout<<"enter two number: ";
    cin>>a>>b;

    //function call
    // cout<<sum(a,b);

    // cout <<prime(a)<<endl;

    // cout <<fact(a)<<endl;

    // incr1(a);
    // cout<<a<<endl;

    // incr2(a);
    // cout<<a<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}

