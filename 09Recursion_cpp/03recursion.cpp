#include<iostream>
using namespace std;

//function to check palindrome
bool checkpal(string str1, int start, int end){

    //base case
    if(start>=end)
    return 1;

    //not matched
    if(str1[start]!=str1[end])
    return 0;
    //matched
    else
    return checkpal(str1, start+1, end-1);
}

//function to count vowels
int count(string str2, int index){

    //base case
    if(index == -1)
    return 0;

    //vowel matched
    if(str2[index]=='a' ||str2[index]=='e' ||str2[index]=='i' ||str2[index]=='o' ||str2[index]=='u')
    return 1+count(str2, index-1);

    //vowel not matched
    else
    return count(str2, index-1);

}

//function to reverse a string
void rev(string &str3, int start, int end){

    //base case
    if(start>=end)
    return;

    char c = str3[start];
    str3[start] = str3[end];
    str3[end] = c;
    rev(str3, start+1, end-1);

}

//function to change lowercase to uppercase
void lowertoupper(string &str4, int index){

    //base case
    if(index==-1)
    return;

    str4[index] = 'A' + str4[index] - 'a';
    lowertoupper(str4, index-1);
}


int main(){
    
    //check palindrome
    string str1 = "naman";
    cout<<checkpal(str1,0,4)<<endl;

    //count vowels
    string str2 = "rohit";
    cout<<count(str2, 4)<<endl;

    //reverse a string
    string str3 = "rohit";
    rev(str3, 0, 4);
    cout<<str3<<endl;

    //lowercase to uppercase
    string str4 = "rohit";
    lowertoupper(str4, 4);
    cout<<str4<<endl;



}