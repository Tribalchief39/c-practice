// The "Final" specifier can be used to prevent classes from being inherted or virtual methods from being overridden.

#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    virtual void method1()
    {
        cout << "Base::method1()" << endl;
    }
    // Cannot be overridden in derived classes
    virtual void method2() final
    {
        cout << "Base::method2()" << endl;
    }
};
class Derived : public Base
{
public:
    // Override method1
    void method1() override
    {
        cout << "Derived::method1()" << endl;
    }
    // Error: cannot override final method
    // void method2() override {
    // cout << "Derived::method2()" << endl;
    // }
};
// Final class - cannot be inherited from
class FinalClass final : public Base
{
public:
    void method1() override
    {
        cout << "FinalClass::method1()" << endl;
    }
};
// Error: cannot inherit from final class
// class AnotherDerived : public FinalClass {
// };
override int main()
{
    Base baseObj;
    Derived derivedObj;
    FinalClass finalObj;
    Base *b1 = &baseObj;
    Base *b2 = &derivedObj;
    Base *b3 = &finalObj;
    b1->method1(); // Base::method1()
    b2->method1(); // Derived::method1()
    b3->method1(); // FinalClass::method1(
    b1->method2(); // Base::method2()
    b2->method2(); // Base::method2() (cannot be overridden)
    b3->method2(); // Base::method2() (cannot be overridden)
    return 0;
}