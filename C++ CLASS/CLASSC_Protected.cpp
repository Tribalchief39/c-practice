#include <iostream>
using namespace std;
 
class A {
protected:
    int sum;
    int integer1;
    int integer2;

protected:
    A() { // Default constructor
        integer1 = 2;
        integer2 = 3;
    }

    A(int a, int b) { // Parameterized constructor
        integer1 = a;
        integer2 = b;
    }

    void display()//method
    {
        sum = integer1 + integer2;
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    A s1;         // Calls default constructor
    s1.display();

    A s2(10, 20); // Calls parameterized constructor
    s2.display();

    return 0;
}

