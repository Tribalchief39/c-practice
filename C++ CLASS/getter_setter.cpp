#include <bits/stdc++.h>
#include<bits/gc
using namespace std;

class hitman {
public:
    int noofkills = 30;
    int health = 100;

    // getter
    char getch() {  
        return ch;
    }

    // setter
    void setch(char h) {
        ch = h;
    }

private:
    char ch = 'a'; 
};
     
int main() {
    hitman h1;
    cout << "Number of kills: " << h1.noofkills << endl;
    cout << "Health: " << h1.health << endl; 

    cout << "Which weapon do I have: " << h1.getch() << endl;


    cout << "After updation..." << endl;
    h1.setch('d');
    cout << "Which weapon do I have: " << h1.getch() << endl;

    return 0;
}
