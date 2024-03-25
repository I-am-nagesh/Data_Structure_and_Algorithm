#include<iostream>
#include <limits.h>
using namespace std;

void printcol(int arr1[][4], int row, int col){
    //column wise
    for(int j = 0; j < col; j++)
    for(int i = 0; i < row; i++)
    cout<<arr1[i][j]<<" ";
}

void printrowmax(int arr1[][4], int row, int col){
    int index = -1, sum = INT_MIN;
    for(int i = 0; i < row; i++){
        int total= 0;
        for(int j = 0; j < col; j++)
        total += arr1[i][j];

        if(total > sum){
            sum = total;
            index = i;
        }
    }
    cout<<index<<endl;
}


int main(){

    //create 2d array----
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {0,1,3,4,6,7,10,11,41,18,9,11};
    int ans[3][4];

    // //print all the value in aaray row wise
    // for(int row=0; row<3; row++){
    //     for( int col=0; col<4; col++){
    //     cout<<arr1[row][col]<<" ";
    //     }
    // }
    // cout<<endl;
    
    // //print all the value in array column wise
    // printcol(arr1, 3, 4);
    // cout<<endl;

    // //print all the value in 2D form
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cout<<"\t"<<arr1[row][col];
    //     }
    //     cout<<endl;
    // }

    // //find an element in array
    // int x = 7;
    // for(int row = 0; row < 3; row++)
    // for(int col = 0; col < 4; col++)
    // {
    //     if(arr1[row][col] == x){
    //         cout<<"yes ";
    //         return 0;
    //     }
    // }
    // cout<<"no ";

    // //adding 2 matrix
    // for(int row = 0; row < 3; row++)
    // for(int col = 0; col < 4; col++)
    // {
    //     ans[row][col] = arr1[row][col] + arr2[row][col];
    // }


    // for(int row = 0; row < 3; row++)
    // for(int col = 0; col < 4; col++)
    //     cout<<ans[row][col]<<" ";

   
    //print row index with maximum sum
    printrowmax(arr1,3,4);


    return 0;
}