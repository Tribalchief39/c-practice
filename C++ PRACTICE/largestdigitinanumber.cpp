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
    int y=0;
    while (x!= 0) {
        int digit = x % 10;
        
        int great;

        // if (digit < 0) 
        // {
        //     digit = -digit;
        // }

        if (digit>y) 
        {
            y=digit;
        }

        x /= 10;
    }

    cout << y << endl;

    return 0;
}