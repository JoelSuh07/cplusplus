#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int rolls = 36000000;
    int sumCounts[13] = {0}; // Index 2-12 used

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < rolls; ++i) {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;
        sumCounts[sum]++;
    }

    cout << "Sum\tCount\n";
    for (int sum = 2; sum <= 12; ++sum) {
        double percent = (sumCounts[sum] * 100.0) / rolls;
        cout << sum << "\t" << sumCounts[sum] << endl;
    }

    cout << "\nNote: 7 should be about 1/6 of all rolls (" << rolls / 6 << " times)." << endl;
    return 0;
}