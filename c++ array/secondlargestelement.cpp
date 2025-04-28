#include<bits/stdc++.h>//mega header file
using namespace std;
int main()
{
    int arr[]={1,13,0,91,51,30,0};
    int largest=-1;
    int secondlargest=-2;
    for(int i=0;i<6;i++)
    {
        if(largest<arr[i])
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(secondlargest<arr[i] && arr[i]!=largest)
        {
            secondlargest=arr[i];
        }
    }
    cout<<"Second largest element: "<<secondlargest<<endl;
}