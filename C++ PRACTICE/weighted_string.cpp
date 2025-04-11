#include <iostream>
#include <string>
#include <vector>

using namespace std;

int stringWeight(const string &S, int K) {
    int count = 0;
    int n = S.length();
    
    for (int i = 0; i < n; i++) {
        int weight = 0;
        for (int j = i; j < n; j++) {
            weight += (S[j] - 'a' + 1);
            if (weight == K) {
                count++;
            }
            if (weight > K) {
                break;
            }
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int K;
        string S;
        cin >> K >> S;
        cout << stringWeight(S, K) << endl;
    }
    return 0;
}