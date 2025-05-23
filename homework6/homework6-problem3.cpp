#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate a new multiplication question
void generateQuestion(int &a, int &b) {
    a = rand() % 9 + 1; // 1 to 9
    b = rand() % 9 + 1; // 1 to 9
}

// Function to display a random correct response
void correctResponse() {
    switch(rand() % 4) {
        case 0: cout << "Very good!\n"; break;
        case 1: cout << "Excellent!\n"; break;
        case 2: cout << "Nice work!\n"; break;
        case 3: cout << "Keep up the good work!\n"; break;
    }
}

// Function to display a random incorrect response
void incorrectResponse() {
    switch(rand() % 4) {
        case 0: cout << "No. Please try again.\n"; break;
        case 1: cout << "Wrong. Try once more.\n"; break;
        case 2: cout << "Don't give up!\n"; break;
        case 3: cout << "No. Keep trying.\n"; break;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int correct = 0, total = 0;

    while (true) {
        correct = 0;
        total = 0;
        while (total < 10) {
            int a, b, answer, userAnswer;
            generateQuestion(a, b);
            answer = a * b;
            cout << "How much is " << a << " times " << b << "? ";
            cin >> userAnswer;
            while (userAnswer != answer) {
                incorrectResponse();
                cout << "How much is " << a << " times " << b << "? ";
                cin >> userAnswer;
            }
            correctResponse();
            correct++;
            total++;
        }
        double percent = (correct / 10.0) * 100.0;
        if (percent < 75.0) {
            cout << "Please ask your teacher for extra help.\n";
        } else {
            cout << "Congratulations, you are ready to go to the next level!\n";
        }
        // Reset for another student
        cout << "Another student? (y/n): ";
        char again;
        cin >> again;
        if (again != 'y' && again != 'Y') break;
    }
    return 0;
}