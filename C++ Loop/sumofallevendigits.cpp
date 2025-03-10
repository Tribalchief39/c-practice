#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    int ld;
    cout<<"Enter the integer: ";
    cin>>num;
    do{
        ld=num%10;
        num/=10;
        if(ld%2==0)
        {
            sum+=ld;
        }
    }while(num!=0);
    cout<<sum;


}