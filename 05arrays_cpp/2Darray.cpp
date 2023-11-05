#include<iostream>
using namespace std;

int main(){

    //create 2d array----
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //print all the value in aaray row wise
    for(int row=0; row<3; row++){
        for( int col=0; col<4; col++){
        cout<<arr[row][col]<<" ";
        }
    }
    
    //print all the value in array column wise

    //print all the value in 2D form
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<"\t"<<arr[row][col];
        }
        cout<<endl;
    }

    return 0;
}