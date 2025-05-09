#include <iostream>
using namespace std;

// Person Class
class Person {
public:
    string name;
    int age;
    string id;
    string contact;

    // Constructor
    Person(string n, int a, string i, string c) {
        name = n;
        age = a;
        id = i;
        contact = c;
    }

    // Display function
    void display() {
        cout << "Name: " << name <<endl;
        cout <<"Age: " << age<<endl;
        cout << "ID: " << id << endl;
        cout<<"Contact: " << contact << endl;
    }
};

// Student Class (inherits from Person)
class Student : public Person {
public:
    string enrollmentDate;
    string program;
    float gpa;

    Student(string n, int a, string i, string c, string ed, string p, float g)
        : Person(n, a, i, c) {
        enrollmentDate = ed;
        program = p;
        gpa = g;
    }

    void display() {
        Person::display();
        cout << "Enrollment Date: " << enrollmentDate<<endl;
        cout<< "Program: " << program<<endl;
        cout<< "GPA: " << gpa << endl;
    }
};

// Professor Class (inherits from Person)
class Professor : public Person {
public:
    string department;
    string specialization;
    string hireDate;

    Professor(string n, int a, string i, string c, string d, string s, string h)
        : Person(n, a, i, c) {
        department = d;
        specialization = s;
        hireDate = h;
    }

    void display() {
        Person::display();
        cout << "Department: " << department<<endl;
        cout<< " Specialization: " << specialization<<endl;
        cout<< " Hire Date: " << hireDate << endl;
    }
};

// Course Class
class Course {
public:
    string code;
    string title;
    int credits;
    string description;

    Course(string c, string t, int cr, string d) {
        code = c;
        title = t;
        credits = cr;
        description = d;
    }

    void display() {
        cout << "Course Code: " << code << endl;
        cout<<" Title: " << title<<endl;
        cout<< " Credits: " << credits<<endl;
        cout<< " Description: " << description << endl;
    }
};

// Department Class
class Department {
public:
    string name;
    string location;
    float budget;

    Department(string n, string l, float b) {
        name = n;
        location = l;
        budget = b;
    }

    void display() {
        cout << "Department: " << name << endl;
        cout<<" Location: " << location<<endl;
        cout<< " Budget:  " << budget << endl;
    }
};

// Main Function
int main() {
    //students
    Student s1("Alice", 19, "S001", "alice@mail.com", "2023-08-01", "BSc CS", 3.6);
    Student s2("Bob", 20, "S002", "bob@mail.com", "2022-08-01", "BSc Physics", 3.2);

    //professors
    Professor p1("Dr. Smith", 45, "P001", "smith@college.edu", "CS", "AI", "2015-06-01");
    Professor p2("Dr. Jones", 50, "P002", "jones@college.edu", "Physics", "Quantum", "2010-01-15");

    // courses
    Course c1("CS101", "Intro to C++", 3, "Basics of programming in C++");
    Course c2("PH201", "Modern Physics", 4, "Intro to quantum mechanics");

    //departments
    Department d1("Computer Science", "Building A", 500000);
    Department d2("Physics", "Building B", 450000);

    cout << "--- Students ---" << endl;
    s1.display();
    s2.display();

    cout << "\n--- Professors ---" << endl;
    p1.display();
    p2.display();

    cout << "\n--- Courses ---" << endl;
    c1.display();
    c2.display();

    cout << "\n--- Departments ---" << endl;
    d1.display();
    d2.display();

    return 0;
}
