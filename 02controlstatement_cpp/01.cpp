

#include <iostream>
using namespace std;
int main(){


 // checking even and odd number
    int n;
    cout << "enter a number: "<<endl;
    cin >>n;
    if( n % 2 == 0){
        cout<<"your number is even"<<endl;

    }
else{
    cout<<"your number is odd"<<endl;
}

// if ...else ladder
int score;
cout << "enter your score between 0-100\n";
cin >> score;

if(score >= 90){
    cout<< "your grade : A\n";
}else if(score >= 70 && score < 90){
    cout << "your grade : B\n";
}else if(score >= 50 && score < 70){
    cout<< "your grade : c\n";
}else{
    cout << "your grade : failed\n";
}
return 0;
}