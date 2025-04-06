#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[5]={10,25,-1,40,5};
    int mx=a[0];
    for(int i=1;i<5;i++)
    {
        if(mx<a[i])
        {
            mx=a[i];
        }
    }
    cout<<"maximum element in array is: "<<mx<<endl;

}