#include<iostream>
using namespace std;

int reverse(int x) {
           

    int reversed = 0;
    do{                                 
        int y = x % 10; //it will give the last element of x
        reversed = reversed * 10 + y;
        x /= 10; //it will delete the last element of x one by one till x=0;
        }while (x != 0);
    return reversed;
    }
    

int main() {
    int x = 123;
    cout << reverse(x);
    return 0;
}
