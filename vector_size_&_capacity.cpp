#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>V;
    V.push_back(5);
    V.push_back(6);
    cout<<"Size:"<<V.size()<<endl<<"Capacity:"<<V.capacity()<<endl;
    cout<<endl;
    V.push_back(7);
    cout<<"Size:"<<V.size()<<endl<<"Capacity:"<<V.capacity()<<endl;
    cout<<endl;
    V.shrink_to_fit();
    cout<<"Size:"<<V.size()<<endl<<"Capacity:"<<V.capacity()<<endl;
    cout<<endl;
    V.push_back(10);
    cout<<"Size:"<<V.size()<<endl<<"Capacity:"<<V.capacity()<<endl;
    //Accessing element
    cout<<V.at(2); //It will give us the value at index postion 2 in vector V.

    //Updating Element
    V.at(2)=20;
    cout<<V.at(2);

}