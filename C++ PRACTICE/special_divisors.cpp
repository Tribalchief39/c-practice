#include <iostream>
#include <vector>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


void findUnitaryDivisors(int n) {
    vector<int> div;
    vector<int> unidiv;

    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            div.push_back(i);
        }
    }

 
    for (int i = 0; i < div.size(); i++) {
        int u = div[i];
        if (gcd(u, n / u) == 1) {  
            unidiv.push_back(u);     
        }
    }
// Output the unitary divisors
//     cout << "Unitary divisors are: ";
//     for (auto x : unidiv) {
//         cout << x << " ";
//     }
//     cout << endl;


}

int main() {
    int T;
    cin >> T;  // Input number of test cases

    while (T--) {
        int n;
        cin >> n;  // Input the number to find divisors of
        findUnitaryDivisors(n);  
    }

    return 0;
}
