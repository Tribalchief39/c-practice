#include <iostream>
using namespace std;

int isPrime(int n)
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

string getFactors(int n)
{
    string factors = "Factors of " + to_string(n) + " are: ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            factors += to_string(i) + " ";
    }
    return factors;
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
        cout << getFactors(n) << endl;
    }

    return 0;
}