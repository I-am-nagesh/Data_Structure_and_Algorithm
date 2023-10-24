#include<iostream>
using namespace std;
int main(){

    int row, col;
    //square pattern
    cout<<"1 square pattern"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //hollow square pattern
    cout<<"2 hollow square pattern"<<endl;
    for(row = 1; row <= 5; row++){
        for(col = 1; col<= 5; col++){
            if( row == 1 || row == 5){
                cout<< "* ";
            }
            else{
                if( col == 1 || col == 5){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout <<endl;
    }

    //left triangle pattern
    cout<<"3 left triangle pattern"<<endl;
    for(row = 1; row<=5; row++){
        for(col = 1; col <= row; col++){
           cout<<"* ";
        }
        cout<<endl;
    }

    //right triangle star pattern
    cout<<"4 right triangle pattern"<<endl;
    for(row = 1; row<= 5; row++){
        for(col = 1; col<= 5 - row; col++){
            cout<<"  ";
        }
        for(col = 5; col>= 5 - row; col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    //left down triangle pattern
    cout<<"5 left down triangle"<<endl;
    for(row = 1; row<=5; row++){
        for(col = 1; col<= 6 - row; col++){
          cout<<"* ";
        }
        cout<<endl;
    }
    //right down triangle pattern
    cout<<"6 right down triangle pattern"<<endl;
    for(row = 1; row <= 5; row++){
        
    }

    //hollow triangle pattern
    cout<<"7 hollow triangle pattern"<<endl;
    for(row = 1; row<=5; row++){

    }
    //pyramid pattern
    cout<<"8 pyramid pattern"<<endl;
    for(row = 1; row<=5; row++){

    }
    return 0;
}


