/*
 * homework3-problem3.cpp
 *
 *  Created on: Apr 17, 2025
 *      Author: Joel Suh
 */

#include <iostream>
#include <cmath>
using namespace std;

double bmiCalc(double k,double m){
	return k/(pow(m,2));
}

void bmiMessage(){
 cout << "BMI VALUES" << endl;
 cout << "Underweight: less than 18.5" << endl;
 cout << "Normal:      between 18.5 and 24.9" << endl;
 cout << "Overweight:  between 25 and 29.9" << endl;
 cout << "Obese:       30 or greater" << endl;
}

double kilo,meter;

int main(){

	cout << "Enter your weight in Kilograms: ";
	cin >> kilo;
	cout << "Enter your height in Meters: ";
	cin >> meter;

	bmiMessage();
	cout << "Your BMI is " << bmiCalc(kilo,meter) << ".";

	return 0;
}




