#include <iostream>
using namespace std;

int main() {
    const int SIZE = 1000;
    int sieve[SIZE];

    // Initialize all elements to 1 (true)
    for (int i = 0; i < SIZE; ++i)
        sieve[i] = 1;

    // Sieve of Eratosthenes
    for (int i = 2; i * i < SIZE; ++i) {
        if (sieve[i]) {
            for (int j = i * 2; j < SIZE; j += i) {
                sieve[j] = 0;
            }
        }
    }

    // Print all primes between 2 and 999
    cout << "Prime numbers between 2 and 999:\n";
    for (int i = 2, count = 0; i < SIZE; ++i) {
        if (sieve[i]) {
            cout << i << " ";
            count++;
            if (count % 15 == 0) cout << endl; // Print 15 primes per line
        }
    }
    cout << endl;
    return 0;
}