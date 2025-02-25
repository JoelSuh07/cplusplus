#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void do1Stuff();
void do2Stuff();
void do3Stuff();

int main()
{
    // display the menu options
    const char FILL = '-';
    const int WIDTH = 40;
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "1. Calculate the length of a sentence\n";
    cout << "2. Validate inside a range\n";
    cout << "3. Validate outside a range\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // get the user's choice
    unsigned userChoice = 0;
    cout << "Enter the option you want: ";
    cin >> userChoice;

    if (userChoice == 1){
        do1Stuff();
    } else if (userChoice == 2){
        do2Stuff();
    } else if (userChoice == 3){
        do3Stuff();
    }

   /* switch (userChoice)
    {
    // TODO: option 1
    case 1:
        do1Stuff();
        break;
    // TODO: option 2
    case 2:
        do2Stuff();
        break;
    // TODO: option 3
    case 3:
        do3Stuff();
        break;
    }
    // good bye message
    cout << "Good bye! Thanks for using my program :)\n";
    // terminate
    return 0;
}*/

void do1Stuff()
{
    string sentence;
    cout << "Enter a sentence: "; // ask user for sentence input
    cin.ignore();
    getline(cin, sentence);                                                      // getline gets input from user
    cout << "Your sentence has " << sentence.length() << " characters." << endl; // prints length of sentence
}

void do2Stuff()
{
    const static unsigned MIN_VALUE = 25, MAX_VALUE = 63;
    int checkNum;
    cout << "I'm going to check if the number you enter is between " << MIN_VALUE << " and " << MAX_VALUE << " using logic!" << endl;
    cin >> checkNum;
    if (checkNum >= MIN_VALUE && checkNum <= MAX_VALUE)
    {
        cout << "The number you entered is between " << MIN_VALUE << " and " << MAX_VALUE << "!" << endl;
    }
    else
    {
        cout << "Nah, you can't fool me! That number is NOT between " << MIN_VALUE << " and " << MAX_VALUE << ". >:(" << endl;
    }
}

void do3Stuff()
{
    const static int MIN_VALUE = -54, MAX_VALUE = 147;
    int checkNum;
    cout << "I'm going to check if the number you enter is outside the range of " << MIN_VALUE << " and " << MAX_VALUE << " using magic!";
    cin >> checkNum;
    if (checkNum >= MIN_VALUE && checkNum <= MAX_VALUE)
    {
        cout << "No fooling my magical logic! That number is in between " << MIN_VALUE << " and " << MAX_VALUE << "! Not cool >:|";
    }
    else
    {
        cout << "The number you entered is definitely smaller than " << MIN_VALUE << " or bigger than " << MAX_VALUE << ".";
    }
}