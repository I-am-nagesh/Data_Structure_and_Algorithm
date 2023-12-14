#include<iostream>
using namespace std;

// void fun3(int n)
// {
//     cout<<n<<" days left for birthday"<<endl;
// }
// void fun2(int n)
// {
//     cout<<n<<" days left for birthday"<<endl;
// }
// void fun1(int n)
// {
//     cout<<n<<" days left for birthday"<<endl;
// }
// void fun0(int n)
// {
//     cout<<"happy birtday"<<endl;
// }

void fun3(int n){
    //base case
    if(n == 0)
    {
        cout<<"happy birthday"<<endl;
        return;
    }
    //recursive case
    cout<<n<<" days left for birthday"<<endl;
    fun3(n-1);
}

   void print (int m){

    //base case
    if (m == 1){
        cout<<1<<endl;
        return;
    }

    //recursive case
    cout<<m<<endl;
    print(m-1);
   }

   void display(int x){
    //base case
    if(x == 2){
        cout<<2<<endl;
        return;
    }
    cout<<x<<endl;
    display(x-2);
   }
   
int main(){

    //iterative approach
    int n = 3;
    // for(int i = n; i>0; i--){
    //     cout<<i<<" days left for birthday"<<endl;
    // }
    // cout<<"happy birthday"<<endl;
    
    // fun3(3);
    // fun2(2);
    // fun1(1);
    // fun0(0);

    fun3(3);

    int m = 5;
    cout<<"printing number from 5 to 1 using recursion:"<<endl;
    print(m);
    

    int x = 10;
    cout<<"printing even number using recursion:"<<endl;
    display(x);

}