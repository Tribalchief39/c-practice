#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={2, 3, 4, 5, 4};
    int sum=0;
    sum=nums.at(0)+nums.at(nums.size()-1);
    cout<<"Sum: "<<sum;
}