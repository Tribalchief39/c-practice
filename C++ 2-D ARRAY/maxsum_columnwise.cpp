#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[100][100]; // Adjust size as needed

    // Input column-wise
    cout << "Enter elements column-wise:\n";
    for (int col = 0; col < cols; col++) {
        for (int row = 0; row < rows; row++) {
            cout << "Element at (" << row << ", " << col << "): ";
            cin >> arr[row][col];
        }
    }

    // Display the array (row-wise)
    cout << "\nArray:\n";
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // Find row with maximum sum
    int maxSum = INT_MIN;
    int maxRow = -1;

    for (int row = 0; row < rows; row++) {
        int sum = 0;
        for (int col = 0; col < cols; col++) {
            sum += arr[row][col];
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxRow = row;
        }
    }

    cout << "\nRow with maximum sum is: " << maxRow << " (0-based indexing)\n";
    cout << "Maximum sum: " << maxSum << endl;

    return 0;
}
