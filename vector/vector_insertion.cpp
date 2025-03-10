#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<char>v={'a','b','d'};
    //inserting 'z' at back
    v.push_back('z');

    //inserting 'c' at index 1
    v.insert(v.begin()+1,'c');
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<endl;
    }
}