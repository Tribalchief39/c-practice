#include<iostream>
using namespace std;
int main()
{
     int size = 5;
    int array[size];

   
    for (int i = 0; i < size; i++) {
        cout << "Enter the element: ";
        cin>>array[i];
    }

    
    cout << "The Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }

    return 0;
}