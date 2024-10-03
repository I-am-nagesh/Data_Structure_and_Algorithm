#include<iostream>
#include<vector>
using namespace std;

int main(){

    int m = 23, n = 17;

    //Bitwise AND operator
    cout<< (m  & n)<<endl;

    //Bitwise OR operator
    cout<< (m | n)<<endl;

    //Bitwise XOR operator
    cout<< (m ^ n)<<endl;

    //Bitwise NOT operator
    cout<< (~m)<<endl;
    cout<< (~n)<<endl;

    //LeftShift operator
    cout<< (m<<1)<<endl;
    cout<< (m<<2)<<endl;
    cout<< (m<<3)<<endl;

    //RightShift operator
    cout<< (m>>1)<<endl;
    cout<< (m>>2)<<endl;
    cout<< (m>>3)<<endl;

    //check even and odd
    if(n&1 == 1){
        cout<<"odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }

    //Get ith Bit using bitwise operator
    //3rd bit of m
    int val = (m & (1 << 2));
    if(val == 0)
    cout<<"the bit present at position 3 is 0"<<endl;
    else if(val > 0)
    cout<<"the bit present at position 3 is 1"<<endl;

    //clear ith Bit using bitwise operator
    cout<<(m & (~(1 << 2)))<<endl;

    //set ith bit using bitwise operator
    cout<<(m | (1 << 2))<<endl;

    //clear last i bits using bitwise operator
    int rightshift = m >> 3;
    cout<<(rightshift << 3)<<endl;

    //clear range of bits using bitwise operator
    cout<<(m & (((~0) << 4) | ((1 << (3 - 1)) - 1)))<<endl;

    //count number of set bits using bitwise operator (count 1)
    int x = 23;
    int counter = 0;
    while( x > 0){
        if((x & 1) > 0)
            counter++;
            x = x >> 1;
        
    }
    cout<<counter<<endl;

    //in built function to count 1 in binary numbers
    cout<<__builtin_popcount(23)<<endl;

    //convert a number to binary and print it
    vector<int>ans;
    while( m > 1){
        ans.push_back( m % 2);
        m = m >> 1;
    }
    ans.push_back(m);
    for(int index = ans.size() - 1; index >= 0; index--){
        cout<< ans[index];
    }

    return 0;
}
