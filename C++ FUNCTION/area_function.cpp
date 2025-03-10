#include <iostream>
using namespace std;
int area(int,int);
int area(int x, int y)
{
    return x * y;
}
int main()
{
    int ans, l, b;
    cout << "enter length and breadth" << endl;
    cin >> l >> b;
    ans = area(l, b);
    cout << "area is" << ans;
    return 0;
}
