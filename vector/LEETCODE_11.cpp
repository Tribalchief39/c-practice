#include<iostream>
#include<vector>
using namespace std;

int maxarea(vector<int>&height)
{
    int current_height;
    int left=0;
    int right=height.size()-1;
    int max_area=0;
    do
    {
        int width=right-left;
        if(height[left]<height[right])
        {
            current_height=height[left];
        }
        else
        {
            current_height=height[right];
        }

        int area=width*current_height;
        if(area>max_area)
        {
            max_area=area;
        }
        else
        {
            max_area=max_are;
        }
        if(left<right)
        {
            left++;
        }
        else
        {
            right--;
        }

    } while (left<right);
    return max_area;

}

int main()
{
    vector<int>height;
    int result=max_area(height);
    cout<<"Maximum Area Is: "<<result<<endl;

}