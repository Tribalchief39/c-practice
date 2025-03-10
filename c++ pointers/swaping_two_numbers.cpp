#include<iostream>
using namespace std;

int swap(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"new value of a= "<<a<<endl;
    cout<<"new value of b= "<<b<<endl;

}
int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<swap(a,b);
}