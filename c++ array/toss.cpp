// Toss and Score
// You are playing a game of Toss and Score in the Hillwood City Mall with your
// friends. The following are the rules of the game:
// * Toss an unbiased coin multiple times.
// * For each heads you get 2 points and for each tails you lose 1 point.
// * The game ends as soon as you get 3 heads in a row, or you toss the coin
// throughout the length of string S.
// You have been given a string S consisting of letters H (for heads) and T (for tails)
// denoting the sequence of results you get on the toss of a coin N times. Your task
// is to find and return an integer value representing the final score you get when
// the game ends.
// Note: The final score can be negative too.

// input Specification:
// input1: A string S, representing the sequence of results you get on the toss
// of a coin N times.
// Output Specification:
// Return an integer value representing the final score you get when the game
// ends.
// Example 1:
// input1 : HHT
// Output : 3

#include<iostream>
#include<cstring>
using namespace std;
int score;
string input1;
int toss(string input1)
{
    for(int i=0;i<=strlen;i++)
    {
        if(input1[i]=='H')
        {
            score+= 2;
        }
        if(input1[i]=='T')
        {
            score-=1;
        }
        if(input1[i]=='H'&&input1[i+1]='H'&&input1[i+2]=='H')
        break;


    }

}

int main()
{
   
    cin>>input1;
    toss(input1);
}