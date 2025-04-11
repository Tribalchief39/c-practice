#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "n: ";
    cin >> n;

    if (n == 0) {
        cout << "Zero" << endl;
    }

    int x = n;

    while (x!= 0) {
        int digit = x % 10;

        if (digit < 0) 
        {
            digit = -digit;
        }

        if (digit % 2 != 0) 
        {
            count++;
        }

        x /= 10;
    }

    cout << count << endl;

    return 0;
}