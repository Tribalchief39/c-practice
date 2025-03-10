#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout<<arr[i];
    }
    
    return 0;
}

// 1d array

#include <iostream>
using namespace std;

int main()
{
    int size;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    
    int* arr = new int[size];

    
    cout << "Provide " << size << " integers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

   
    cout << "The array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    delete[] arr;

    return 0;
}