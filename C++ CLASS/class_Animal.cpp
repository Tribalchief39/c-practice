#include<bits/stdc++.h>
using namespace std;
class Animal
{
 protected: //try for public as well as for private
    string name;
    int age;
    public:
    Animal(string name,int age):name(name),age(age){}//parametric constructor
    void eat()
    {
        cout<<name<<" is eating."<<endl;
    }
    void sleep()
    {
        cout<<name<<" is sleeping."<<endl;
    }

};
//Derived class
class Dog:public Animal {
    private:
    string breed;
    public:
    Dog(string name,int age,string breed):Animal(name,age),breed(breed){}

    void bark()
    {
        cout<<name<<" (a "<<breed<<") is barking."<<endl;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Breed: "<<breed<<endl;
    }

};
int main()
{
Dog dog("Max",3,"German Shepherd");
dog.display();
dog.eat();//inherited from animal
dog.sleep();//inherited from animal
dog.bark();//defined in dog
}