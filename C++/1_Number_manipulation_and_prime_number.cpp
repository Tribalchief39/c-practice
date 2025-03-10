#include<iostream>
using namespace std;
int main()
{   
    int n;
    int a=1;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if (n/n==0)
    {
        cout<<n<<" is a prime number"<<endl;
        do
        {
            n+=1;
        } while (n/n==0);
        cout<<n <<" is the next prime number."<<endl;
        
    }

    if(n/n!=0)
    {
        cout<<n<<" is not a prime number"<<endl;
        do
        {
            cout<<a<<endl;
            a++; 
        } while (n/a==0);
        
        
    }

    

}