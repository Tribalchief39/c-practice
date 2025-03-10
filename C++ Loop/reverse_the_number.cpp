#include<iostream>
using namespace std;
int main()
{
    int num;
    int ld;
    int r=0;

    cout<<"Enter the number: ";
    cin>>num;
    do{
        ld=num%10;
        r=r*10;
        r=r+ld;
        num/=10; 
    }while(num!=0);
    cout<<r;
}