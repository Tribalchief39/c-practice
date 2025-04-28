//it is use to do the union of two same variables of two parent classes 
#include<bits/stdc++.h>
using namespace std;
class D
{
    public:
    int temp;
    D()
    {
        cout<<"In class D"<<endl;
    }
};
class A:virtual public D
{
    protected:
    int a=10;
    public:
    A()
    {
        cout<<"In Class A"<<endl;
    }
    int increment()
    {
        return a++;
    }

};
class B: virtual public D
{
    protected:
    int b=5;
    public:
    B()
    {
        cout<<"In Class B"<<endl;
    }
    int decrement()
    {
        return b--;
    }
};
class C:public B,public A
{
    public:
    C()
    {
        cout<<"In class C"<<endl;
    }
};
int main()
{
    C c;
//     cout<<c.increment()<<endl;
//     cout<<c.decrement()<<endl;
    cout<<c.temp;
}