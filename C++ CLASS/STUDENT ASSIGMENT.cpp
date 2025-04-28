#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int Roll_no;
    float CGPA;
    vector<string> enrolled_courses;
    int course_count = 5;  // To keep track of how many courses are added

public:
    // Default constructor
    Student()
    {
        cout << "You are in the default constructor" << endl;
        name = "unknown";
        Roll_no = 0;
        CGPA = 0.0;
        enrolled_courses = {"english", "maths", "focp", "beee", "egd"}; // Initialize directly
    }

    // Parameterized constructor
    Student(string n, int r, float p, vector<string> courses)
    {
        cout << "You are in the parameterized constructor" << endl;
        name = n;
        Roll_no = r;
        CGPA = p;
        enrolled_courses = courses;  // Directly assign the passed vector
    }

    // Display function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << Roll_no << endl;
        cout << "CGPA: " << CGPA << endl;
        cout << "Enrolled Courses: ";
        for (int i = 0; i < enrolled_courses.size(); i++)  // Loop through the vector correctly
        {
            cout << enrolled_courses.at(i) << " ";
        }
        cout << endl;
    }

    // Add a new course
    void addCourse(string course)
    {
        if (course_count < enrolled_courses.size() + 1)  // Prevent adding more than 5 courses
        {
            enrolled_courses.push_back(course);  // Add the new course
            course_count++;
            cout << "Course " << course << " added successfully!" << endl;
        }
        else
        {
            cout << "Cannot add more than 5 courses." << endl;
        }
    }

    // Update CGPA
    void updateCGPA(float newCGPA)
    {
        if (newCGPA >= 0.0 && newCGPA <= 10.0)
        {
            CGPA = newCGPA;
            cout << "CGPA updated successfully!" << endl;
        }
        else
        {
            cout << "Invalid CGPA! Enter a value between 0 and 10." << endl;
        }
    }
};

int main()
{
    // Create a Student object using the default constructor
    Student s1;
    s1.display();

    cout << endl;

    // Create a vector of courses to pass to the parameterized constructor
    vector<string> courses = {"english", "maths", "focp", "beee", "egd"};
    
    // Create a Student object using the parameterized constructor
    Student s2("Twarit", 100, 7.5, courses);
    s2.display();

    cout << endl;

    // Add a course and update CGPA
    s2.addCourse("physics");
    s2.updateCGPA(8.2);
    s2.display();

    return 0;
}
