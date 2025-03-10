#include<iostream>
using namespace std;
int main(){
    int arr[3][3],i,j,sum;
    cout<<"provide array elements";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }


//cout<<"provided array look like"<<endl;
for(j=0;j<3;j++)
    {
        int sum=0;
        for(i=0;i<3;i++)
        {
            sum+=arr[i][j];
        }
        cout<<"sum of columns is "<<j+1<<"="<<sum<<endl;
    }

}