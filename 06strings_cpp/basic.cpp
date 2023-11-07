#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

//passing string to function
void print_string(string str_5){
    cout<<"passed string is: "<<str_5<<endl;
    return;
}

int main(){
   
    // string-->sequences of character
    //C-style string (null character '\0')
    char s1[] = "nagesh";
    char s2[10] = "nagesh";
    char s3[] = {'n','a','g','e','s','h'};
    char s4[10] = {'n','a','g','e','s','h'};

    cout<< s1 <<endl;
    cout<< s2 <<endl;
    cout<< s3 <<endl;
    cout<< s4 <<endl;
    

    //c++ style string
    string str_1 = "nagesh";
    string str_2("nagesh");

    cout << str_1 <<endl;
    cout << str_2 <<endl;

    //taking string input
    //using cin
    string str_3;
    cout<<"enter string: ";
    cin>>str_3;
    cout<<"string is: "<<str_3<<endl;

    //using getline() function-->enable to take multiple character without eliminating whitespaces
    string str_4;
    cout<<"enter string: ";
    getline(cin, str_4);
    cout<<"string is: "<<str_4<<endl;

    //using stringstrem class

    //passing string to function
    string str_5 = "nagesh pandey";
    print_string(str_5);

    //some string operation  ---->iteration
    cout<<"size of passed string: "<<str_5.size()<<endl;
    cout<<"length of passed string: "<<str_5.length()<<endl;
    cout<<"capacity of passed string: "<<str_5.capacity()<<endl;
    str_5.resize(6);
    cout<<"resized passed string: "<<str_5<<endl;
    


  
    


    return 0;
}