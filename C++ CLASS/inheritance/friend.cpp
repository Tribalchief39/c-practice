#include <bits/stdc++.h>
using namespace std;
class X
{
private:
    int l, b;

public:
    X(int l, int b) : l(l), b(b) {}
    friend int area(X ob);
};
int area(X ob)
{
    return ob.l * ob.b;
}
int main()
{
    X obj(2, 3);
    cout << area(obj);
}