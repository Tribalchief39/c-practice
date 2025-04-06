#include<iostream>
using namespace std;
void reversearray(int arr[],int n)
{
    int x=0;
    int y=n-1;
    while(x<y)
    {
        swap(arr[x],arr[y]);
        x++;
        y--;
    
    }
}
int main()
{
    int n=6;
    int arr[n]={ 1, 2, 3, 4, 5, 6};
    cout<<"Before swaping: "<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After swaping: "<<endl;
    reversearray(arr,n);
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}