#include <iostream>

using namespace std;

int findSecondSmallestAndLargest(int arr[], int size)
{
    int firstMin = arr[0], secondMin = arr[0];

    int firstMax = arr[0], secondMax = arr[0];

    for (int i = 1; i < size; i++)
    { // Find firstMin and firstMax

        if (arr[i] < firstMin)
            firstMin = arr[i];

        if (arr[i] > firstMax)
            firstMax = arr[i];
    }

    secondMin = firstMax;

    secondMax = firstMin;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > firstMin && arr[i] < secondMin)
        {

            secondMin = arr[i];
        }

        if (arr[i] < firstMax && arr[i] > secondMax)
        {

            secondMax = arr[i];
        }
    }

    cout << "Second Smallest: " << secondMin << endl;

    cout << "Second Largest: " << secondMax << endl;
}

int main()
{

    int n;

    cout << "Enter the number of elements: ";

    cin >> n;

    if (n < 2)
    {

        cout << "Array must have at least two elements.\n";

        return 0;
    }

    int arr[n];

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    findSecondSmallestAndLargest(arr, n);

    return 0;
}