#include <bits/stdc++.h>
using namespace std;

class A {
private:
    int sum;
    int integer1;
    int integer2;

public://constructor can never be private or protected
    A() { // Default constructor
        integer1 = 2;
        integer2 = 3;
    }

    A(int a, int b) { // Parameterized constructor
        integer1 = a;
        integer2 = b;
    }
//private: it will give an error
    void display() {
        sum = integer1 + integer2;
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    A s1;         // Calls default constructor
    s1.display();

    A s2(10, 20); // Calls parameterized constructor
    s2.display();
    //cout<<"Integer1: "<<integer<<endl;

    return 0;
}

