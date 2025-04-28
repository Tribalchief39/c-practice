#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<"Display method of base class"<<endl;

    }

};

class Derived: public Base{
    public:
    virtual void display() override{
        cout<<"Display method of derived class."<<endl;
    }
};
int main()
{
    // Derived d;
    // d.display();
    Base* baseptr;
    Derived derivedObj;
    baseptr=&derivedObj;

baseptr->display();
return 0;
}