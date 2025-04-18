#include <iostream>

using namespace std;

int digit,one,two,three,four,five,number;

bool checkPalindrome(int digit){
    one = digit / 10000;
    two = (digit / 1000) % 10;
    three = (digit / 100) % 10;
    four = (digit / 10) % 10;
    five = digit % 10;

    if(one == five && two == four){
        return true;
} else{
        return false;
    }
}

int main(){
    cout << "Enter a 5-digit number: ";
    cin >> number;
    if(checkPalindrome(number)){
        cout << "The number is a palindrome." << endl;
    }else{
        cout << "The number is not a palindrome." << endl;
    }

return 0;
}