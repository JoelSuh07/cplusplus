#include <iostream>
#include "GVDie.h"
using namespace std;


int main() {
   int goal;
   int credits;
   int rounds;
   int seed;
   int total;
   GVDie die1 = GVDie();
   GVDie die2 = GVDie();

   // Read random seed to support testing (do not alter)
   cin >> seed;
   srand(seed);

   // Read starting credits
   cin >> credits;

   /* Type your code here */
    die1.Roll();
    die2.Roll();
    total = die1.GetValue() + die2.GetValue();

    //Step 1
    if (total == 7 || total == 11) {
    credits += 1;
    cout << "Dice total: " << total << endl;
} else if (total == 2 || total == 3 || total == 12) {
    credits -= 1;
    cout << "Dice total: " << total << endl;
} else {
    goal = total;
    while (true){
        die1.Roll();
        die2.Roll();
    if (total == 7) {
        credits -= 1;
        cout << "Dice total: " << total << endl;
        break;
} else if (total == goal) {
        credits += 1;
        cout << "Dice total: " << total << endl;
        break;
    }
}
    
    cout << "Credits: " << credits << endl;

    
   return 0;
}
