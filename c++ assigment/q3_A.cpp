#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "You entered: " << input << endl;
    return 0;
}