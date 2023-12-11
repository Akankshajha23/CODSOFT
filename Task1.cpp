// TASK1: TO CREATE A NUMBER GUESSING GAME
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name:";
    cin >> name;
    cout << "\n   ||NUMBER GUESSING GAME||" << endl;
    cout << "\n      Welcome " << name << "!" << endl;
    cout << "Computer has already chose a number to be guessed between 1 to 100. Use multiple atttempts to guess the number\n"
         << endl;
    cout << "BEST OF LUCK!" << endl;

    srand(time(0));

    // Generating a Random Number
    int rnumber = rand() % 100 + 1;
    int number;

    int chances = 0;
    do
    {
        // Taking the guess from the user
        cout << "Enter your number:" << endl;
        cin >> number;
        chances++;

        if (number == rnumber)
        {
            cout << "Wow! You have guessed the number in " << chances << " attempts!" << endl;
        }
        else if (number < rnumber)
        {
            cout << "OOPS! It is Low. Try guessing high!" << endl;
        }
        else
        {
            cout << "OOPS! It is High. Try guessing low!" << endl;
        }
    } while (number != rnumber);
    return 0;
}