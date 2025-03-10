#include<iostream>
using namespace std;

int main()
{
string str = "tree";
    int n = str.length();
    char arr[n + 1];

    // // Null terminate char array
    // arr[n] = '\0';

      
    for (int i = 0; i < n; i++)
        arr[i] = str[i];

    cout << "{ ";
      for (int i = 0; i < n; i++)
      cout << arr[i] << ", ";
    cout << "}";
    
    
}