#include<bits/stdtr1c++.h>
using namespace std;

//function to convert character from lowercase to uppercase
char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

//function to check armstrong number

int countdigit(int n)  //function to count digit in a number
{
  int count = 0;
  while (n)
  {
    count++;
    n/=10;
  }
  return count; 
}

bool armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while(n)
    {
        rem = n%10;
        n/=10;
        ans = ans + pow(rem, digit);

    }
    if(ans==num)
    return 1;
    else
    return 0;

}

int main(){
    // char name;
    // cin>>name;
    // cout<<convert(name); //function call for character conversion

    int num;
    cin >> num;
    
    //count digit
    int digit = countdigit(num);
    //armstrong number
    cout << armstrong(num, digit);
    return 0;
}