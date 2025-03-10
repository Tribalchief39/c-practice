#include<iostream>
using namespace std;

void print(int a)
{
    cout<<a<<endl;
}

void update()
{
    int x=5;
    x++;
    print(x);
}



int main()
{
    update();
}