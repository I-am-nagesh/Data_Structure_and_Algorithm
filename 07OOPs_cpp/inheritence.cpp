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

//types of inheritence===

class Animal {
    public:
    void eat(){
        cout<<"I can eat!"<<endl;
    }
};
class Bird {
    public:
    void fly(){
        cout<<"I can fly!"<<endl;
    }
};


// Single inheritence--->a class can inherit from only one class
class Dog : public Animal {
    public:
    void bark(){
        cout<<"I can bark! Woof woof!!"<<endl;
    }
};


//Multiple inheritence ---->a class can inherit from more than one class
class pegasus : public Animal, public Bird {
    public:
    void soar(){
cout<<"I can soar like a peagasus!"<<endl;
    }
};

//Multilevel Inheritance---->a derived class can inherit from another derived class
class wilddog : public Dog {
    public:
    void barking(){
        cout<<"I can bark more loudly!!"<<endl;
    }
};

//Hierarchical Inheritance-->more than one subclass is inherited from single base class
class cat : public Animal {
    public:
    void meow(){
        cout<<"I can meow!!"<<endl;
    }
};

//Hybrid (virtual) inheritance ---->combining more than one type of inheritance
class hybrid : public cat, public pegasus {
   public:
   void hybridd(){
    cout<<"I am hybrid animal!!!"<<endl;
   }
};

int main(){
    class_2 obj;
    cout<<"example of inheritance:"<<endl;
    obj.parent();
    obj.child();
    
    cout<<endl<<"example of single inheritance:"<<endl;
    Dog d;
    d.eat();
    d.bark();
   
    cout<<endl<<"example of multiple inheritance:"<<endl;
    pegasus p;
    p.eat();
    p.fly();
    p.soar();

    cout<<endl<<"example of multilevel inheritance:"<<endl;
    wilddog w;
    w.eat();
    w.bark();
    w.barking();

    cout<<endl<<"example of hierarchial inheritance:"<<endl;
    cat c;
    c.eat();
    c.meow();

    cout<<endl<<"example of Hybrid(virtual) inheritance:"<<endl;
    hybrid h;
    h.meow();
    h.fly();
    h.soar();
    h.hybridd();


    return 0;

}