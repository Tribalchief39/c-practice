#include<iostream>
using namespace std;
int main()
{
    int num;
    int ld;
    int product=1;

    cout<<"Enter the integer: ";
    cin>>num;
    do{
        ld=num%10;
        num/=10;
        product*=ld;


    }while(num!=0);
    cout<<product;
}