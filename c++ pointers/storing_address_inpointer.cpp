#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a;
    cout<<"Enter an integer value: ";
    cin>>a;
    int * ptr=&a;
    cout<<ptr;
}