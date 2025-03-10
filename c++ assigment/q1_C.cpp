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

int nextPrime(int n)
{
    int next = n + 1;
    while (!PrimeNo(next))
    {
        next++;
    }
    return next;
}
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (PrimeNo(n))
    {
        cout << n << " is a prime number.\n";
        cout << "The next prime number is " << nextPrime(n) << ".\n";
    }
    else
    {
        cout << n << " is not a prime number.\n";
    }
    return 0;
}