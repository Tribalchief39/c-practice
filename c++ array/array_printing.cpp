#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // int x[4];
    // x[0]=3;
    // x[1]=4;
    // x[2]=5;
    // x[3]=6;
    // for(int i=0; i<=3; i++)
    // {
    //     cout<<x[i]<<" ";
    // }

    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n;
}

