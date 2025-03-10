#include<iostream>
using namespace std;
int main(){
    int arr[3][3],i,j;
    cout<<"provide array elements";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }


//cout<<"provided array look like"<<endl;
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<arr[i][j];
        }
            cout<<endl;
    }
}