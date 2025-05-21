#include <iostream>
using namespace std;

int digit1, digit2, digit3, digit4, digit5, num;

int main(){
    cout << "Enter 5 digits of number: ";
    cin >> num;

    digit1 = num / 10000;
    digit2 = num % 10000 / 1000;
    digit3 = num % 1000 / 100;
    digit4 = num % 100 / 10;
    digit5 = num % 10;
    
    cout << digit1 << "   " << 
            digit2 << "   " <<
            digit3 << "   " <<
            digit4 << "   " <<
            digit5;

    return 0;
}
