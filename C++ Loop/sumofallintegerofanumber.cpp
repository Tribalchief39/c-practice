#include<iostream>
using namespace std;
int main()
{
    int num;
    int b;
    int rem;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    do{
        rem=num%10;
        num/=10;
        sum+=rem;

    }while(num!=0);
    cout<<sum   ;


}