#include<iostream>
#include<vector>
using namespace std;

// Function to calculate the maximum area between two lines
int max_area(vector<int>& height)
{
    int current_height;
    int left = 0;                      // Left pointer starting from the beginning of the array
    int right = height.size() - 1;     // Right pointer starting from the end of the array
    int max_area = 0;                  // Variable to store the maximum area found

    // Loop until the two pointers meet
    while (left < right)
    {
        int width = right - left;      // Calculate the width between the two lines
        current_height = min(height[left], height[right]);  // Determine the height

        int area = width * current_height;   
        max_area = max(max_area, area);      // Update max_area if we found a bigger area

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return max_area;  
}

int main()
{
    vector<int> height = {1, 2, 3, 4};  
    int result = max_area(height);      // Call the function to find the maximum area
    cout << "Maximum Area Is: " << result << endl;  
}
