//============================================================================
// Name : lab07.cpp
// Author :
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int num1,num2;
bool flag;

int main() {
cout << "Enter two numbers: ";
cin >> num1 >> num2;

flag = false;

if (num1 > 0){
    if (num2 < 0){
    flag = true;
        if (flag == true){
        cout << "Complex condition met!";
        }
    } else if(flag == true){
    cout << "Complex condition met!";
    }
} else if(num1 == -5){
    if (num2 > 0){
        flag = true;
        if (flag == true){
            cout << "Complex condition met!";
        }
        } else if(flag == true){
            cout << "Complex condition met!";
        }
    } else if(flag == true){
    cout << "Complex condition met!";
    }

    
    if (flag == true){
        cout << "Complex condition met!";
    }
    return 0;
    }