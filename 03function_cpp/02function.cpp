#include<iostream>
using namespace std;

//function to convert character from lowercase to uppercase
char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

//function to check armstrong number


int main(){
    char name;
    cin>>name;

    cout<<convert(name); //function call for character conversion


    return 0;
}