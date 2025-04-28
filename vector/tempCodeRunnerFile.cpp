#include<iostream>
#include<vector>
using namespace std;
int p=1;
int s=0;
int product(vector<int>n)
{
   n.shrink_to_fit();
   for(int i=0;i<=n.size()-1;i++)
   {
       p*=n.at(i);
   }
   return p;

}
int sum(vector<int>n)
{
    n.shrink_to_fit();
    for(int i=0;i<=n.size()-1;i++)
   {
       s+=n.at(i);
   }
   return s;

}

int main()
{
    int c;
    cout<<"Enter the no. of digits you want to enter: ";
    cin>>c;
    vector<int>n;
    cout<<"Enter the digits: ";
    for(int i=0;i<=c-1;i++)
    {
        n.push_back(i);
    }
    int a=product(n);
    int b=sum(n);
    cout<<"Output: "<<a-b<<endl;
}