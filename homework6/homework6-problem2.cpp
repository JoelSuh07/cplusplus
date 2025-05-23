/*
 * homework6-problem2.cpp
 *
 *  Created on: May 13, 2025
 *      Author: Joel Suh
 */

#include <iostream>
using namespace std;

// Function to check if a number is perfect and print its divisors
bool isPerfect(int num) {
    int sum = 0;
    cout << num << ": Divisors: ";
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    return sum == num;
}

int main() {
    cout << "Perfect numbers between 1 and 1000:\n";
    for (int n = 1; n <= 1000; ++n) {
        if (isPerfect(n)) {
            cout << n << " is a perfect number.\n";
        }
    }
    return 0;
}
