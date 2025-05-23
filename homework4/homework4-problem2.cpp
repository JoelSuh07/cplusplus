#include <iostream>
using namespace std;

double a,b,c;

bool isTriangle(double a, double b, double c){
    if(a+b>c && a+c>b && b+c>a){
        return true;
    }else{
        return false;
    }
}

bool isRightTriangle(double a, double b, double c){
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout << "Enter 3 digits: ";
    cin >> a >> b >> c;
    isTriangle(a,b,c) ? cout << "The numbers can form a triangle.\n" 
    : cout << "The numbers cannot form a triangle.\n";
    isRightTriangle(a,b,c) ? cout << "The numbers can form a right triangle."
    : cout << "The numbers cannot form a right triangle.";

    return 0;
}
