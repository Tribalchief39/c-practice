// I have a doubt in this question.
#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter a positive integer: ";
    cin >> i;
    cout << endl;
    if ((i % 3 == 0 && i % 5 == 0) && (i % 15 != 0))
    {
        cout << "The integer is divisible by 3 or 5 but not divisible by 15" << endl;
    }
    else if (i % 3 == 0 && i % 5 == 0 && i % 15 == 0)
    {
        cout << "The integer is divisible by 3,5 and 15" << endl;
    }
    else if (i%3==0 && i%5!=0 && i%15!=0)
    {
        cout << "The integer is divisible by 3" << endl;
    }
    else if (i%5==0 && i%3!=0 && i%15!=0)
    {
        cout << "The integer is divisible by 5" << endl;
    }
    else
    {
        cout << "The integer is not divisible by 3 or 5 but it is divisible by 15" << endl;
    }
}