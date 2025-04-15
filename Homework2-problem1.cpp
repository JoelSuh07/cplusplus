#include <iostream>
using namespace std;

int main() {
    int number, digit1, digit2, digit3, digit4, digit5;

    // Input a five-digit integer
    cout << "Enter a five-digit integer: ";
    cin >> number;

    // Separate the digits using integer division and remainder operations
    digit1 = number / 10000;
    digit2 = (number % 10000) / 1000;
    digit3 = (number % 1000) / 100;
    digit4 = (number % 100) / 10;
    digit5 = number % 10;

    // Print the digits separated by three spaces
    cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 << endl;

    return 0;
}