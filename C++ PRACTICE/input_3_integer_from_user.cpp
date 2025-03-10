// input 3 integer from user and the print the greatest among those three integer.
#include <iostream>
using namespace std;
int main()
{
    int first, second, third;
    cout << "Enter the first integer: ";
    cin >> first;
    cout << endl;
    cout << "Enter the second integer: ";
    cin >> second;
    cout << endl;
    cout << "Enter the third integer: ";
    cin >> third;
    cout << endl;
    if (first<second> third)
    {
        cout << "second integer is the greatest integer";
        cout << endl;
    }
    else if (first > second && first > third)
    {
        cout << "first integer is the greatest integer";
        cout << endl;
    }

    else if (first == second == third)
    {
        cout << "all integers are equal";
        cout << endl;
    }
    else
    {
        cout << "third integer is the greatest integer";
        cout << endl;
    }
}