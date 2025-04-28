#include<bits/stdc++.h>
using namespace std;
class A
{
    protected:
    int a=10;
    public:
    A()
    {
        cout<<"In class A"<<endl;
    }
    int increment()
    {
        return a++;
    }
};
class B
{
    protected:
    int b=5;
    public:
    B()
    {
        cout<<"In class B"<<endl;
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
    cout<<c.increment()<<endl;
    cout<<c.decrement()<<endl;
}