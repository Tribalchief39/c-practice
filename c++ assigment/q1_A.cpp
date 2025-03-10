#include <iostream>
using namespace std;

int PrimeNo(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << n << (PrimeNo(n) ? " is a prime number." : " is not a prime number.") << endl;

    return 0;
}