#include<iostream>
#include <vector>
using namespace std;
void point(int a)
{
    cout<<&a<<endl;
}
int main()
{
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    point(a);
}