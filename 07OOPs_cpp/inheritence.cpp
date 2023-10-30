#include<iostream>
using namespace std;

class class_1{
    public:
    void parent(){
        cout<<"i am parent class"<<endl;
    }
};
class class_2 : public class_1{
    public:
    void child(){
    cout<<"i am derived class"<<endl;
    }

};

int main(){
    class_2 obj;
    obj.parent();
    obj.child();
    

    return 0;

}