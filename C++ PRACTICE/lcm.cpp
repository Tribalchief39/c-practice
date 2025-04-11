#include<iostream>
using namespace std;

int main() {
    int l1, l2;
    cout << "l1: ";
    cin >> l1;
    cout << "l2: ";
    cin >> l2;

    int max = (l1 > l2) ? l1 : l2;

    while (true) {
        if (max % l1 == 0 && max % l2 == 0) {
            cout << "LCM: " << max << endl;
            break;
        }
        max++;
    }

    return 0;
}
