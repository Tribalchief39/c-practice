//count the length of the number
#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cout<<"Enter a number: ";
    cin>>n;
    do{
        n=n/10;
        count++;
    }while(n!=0);
    cout<<count;
}