#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 4};
    vector<int> arr2 = {1, 3, 4};
    vector<int> merged;

    int i = 0, j = 0;

    // Merge the two sorted arrays
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Add remaining elements of arr1, if any
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements of arr2, if any
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    // Print the merged array
    for (auto x : merged)
        cout << x << " ";

    return 0;
}
