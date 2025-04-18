#include <iostream>
#include <algorithm>
using namespace std;

int digit;
int one,two,three,four;

// Replace each digit with the result of adding 7 to the digit 
// and getting the remainder after dividing the new value by 10.
int digitCalc(int digit){
    one = digit / 1000;
    two = (digit / 100) % 10;
    three = (digit / 10) % 10;
    four = digit % 10;
    
    one = (one + 7) % 10;
    two = (two + 7) % 10;
    three = (three + 7) % 10;
    four = (four + 7) % 10;

    return one*1000 + two*100 + three*10 + four;
}

int reverseDigitCalc(int digit){
    one = digit / 1000;
    two = (digit / 100) % 10;
    three = (digit / 10) % 10;
    four = digit % 10;

    one = (one - 7 + 10) % 10;
    two = (two - 7 + 10) % 10;
    three = (three - 7 + 10) % 10;
    four = (four - 7 + 10) % 10;

    return one*1000 + two*100 + three*10 + four;
}

//Then swap the first digit with the third, and swap the second digit with the fourth.
int swapNum(int a, int b){
 swap(a, b);
 return a, b;
}

int main(){
    cout << "Enter a 4-digit number: ";
    cin >> digit;
    cout << "The new sum is: " << digitCalc(digit) << endl;
    swap(one, three);
    swap(two, four);
    cout << "The new swapped sum is: " << one << two << three << four << endl;
    swap(one,three);
    swap(two,four);
    cout << "The sum pre-swapped number is: " << one << two << three << four << endl;
    reverseDigitCalc(digitCalc(digit));
    cout << "The original number is: " << reverseDigitCalc(digitCalc(digit)) << endl;

    return 0;

}