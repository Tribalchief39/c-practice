#include <iostream>
using namespace std;

void alternatingSwap(int arr[], int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    alternatingSwap(arr, n);

    cout << "Array after alternating swap: ";
    printArray(arr, n);

    return 0;
}
