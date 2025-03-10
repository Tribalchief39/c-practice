#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>V;
    V.push_back(1);
    V.push_back(2);
    V.push_back(3);
    V.push_back(4);
    for(int i=0;i<V.size();i++)
    {
        cout<<V.at(i);
        cout<<endl;
        
    }
    
    for(auto x:V)//x is an iterator having datatype auto
    cout<<x<<" ";
    cout<<endl;
    cout<<V.front();//print the element on index value 0.
    cout<<endl;
    cout<< V.back();//print the element on index value 3.
}