#include<iostream>
#include<math.h>
using namespace std;
int result(int b,int p)
{
    if (p==0)
    {
        return 1;
    }
    return(pow(b,p));
}
int main()


{
    int b;
    int p;
    cout<<"Enter the base integer: ";
    cin>>b;
    cout<<endl;
    cout<<"Enter the power of integer: ";
    cin>>p;
    cout<<endl;
    cout<<"result: "<<result(b,p);
}

