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
for(i=0;i<3;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
        cout<<"sum of row is "<<i+1<<"="<<sum<<endl;
    }

}