#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); // declaration
    void getdata()
    {
        cout << "the value of a is: " << a << endl;
        cout << "the value of b is: " << b << endl;
        cout << "the value of c is: " << c << endl;
        cout << "the value of d is: " << d << endl;
        cout << "the value of e is: " << e << endl;
    }
};
void Employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary :: ones(void)
{
    for( int i =0; i < s.length(); i++)
    {
        if(s.at(i) == '0'){
            s.at(i) == '1';
        }
        else (s.at(i) == '1'){
            s.at(i) == '0';
        }
    }
}
void binary :: display(void)
{
    cout<<"displaying your binary number"<<endl;
    for(int i =0; i<s.length(); i++){
        cout << s.at(i);
    }
    cout<<endl;
    
}

int main()
{
    Employee obj;
    // obj.a = 134; -->this will throw error as a is private
    obj.d = 34;
    obj.e = 89;
    obj.setdata(1, 2, 4);
    obj.getdata();

    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();
    b.display();

    return 0;
}
