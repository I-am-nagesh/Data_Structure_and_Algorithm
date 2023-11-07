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
     

    string str_6 = "nagesh pandey";

    //declaring an iteration
    string :: iterator itr;
    itr = str_6.begin();      //begin()--->print first character in string
    cout<<*itr<<endl;
    
    itr++;        //printing second character in string
    cout<< *itr<<endl;

    itr = str_6.end();        //end()--->print last character in string
    cout<< *itr<<endl;
    itr--;
    cout<< *itr<<endl;
    itr--;
    cout<< *itr<<endl;

    //declaring a reverse iteration
    string :: reverse_iterator ritr;

    ritr = str_6.rbegin();    //rbegin()-->reverse begining
    cout<< *ritr<<endl;
    ritr++;
    cout<< *ritr<<endl;

    ritr = str_6.rend();
    cout<< *ritr<<endl;
    ritr--;
    cout<< *ritr<<endl;
    ritr--;
    cout<< *ritr<<endl;

    char str_7[20];
    str_6.copy(str_7, 6, 7);    //copy(target character array, length to be copied, starting position)
    str_7[6] = '\0';
    cout<<"the copied string is: "<<str_7<<endl;

    str_6.swap(str_3);
    cout<<str_3<<endl;  //nagesh pandey
    cout<<str_6<<endl;  //user given will be print
    
    
    return 0;
}