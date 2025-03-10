#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int roll_no;
    string name;
    int marks[5];

    void input()
    {
        cout << "Provide Roll no: ";
        cin >> roll_no;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter 5 marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void display()
    {
        cout << "\nRoll No: " << roll_no;
        cout << "\nName: " << name;
        cout << "\nMarks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}