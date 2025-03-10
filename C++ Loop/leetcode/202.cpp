#include <iostream>
using namespace std;
int rem;
int sum = 0;

bool isHappy(int n)
{
   while(true)
   { while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem);
        n = n / 10;
    }
    if (sum == 1)
    {
        return true;
    }
    else
    {
        sum = n;
    }
   }
}

int main()
{
    int n;
    n = 19;
    cout << isHappy(19);
}