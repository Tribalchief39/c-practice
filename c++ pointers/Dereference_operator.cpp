//  *  is a dereference operator
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a=10;
    int* ptr=&a;
    cout<<*(&a)<<endl;
}