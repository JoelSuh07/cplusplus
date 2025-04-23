/*
 * homework4.cpp
 *
 *  Created on: Apr 22, 2025
 *      Author: student
 */

#include <iostream>
using namespace std;

double miles = 0;
double gallons,totalMiles,totalGallons,MPG,totalMPG;

int main(){

	while(miles != -1){
	cout << "Enter miles driven (-1 to quit): ";
	cin >> miles;
	cout << "Enter gallons used: ";
	cin >> gallons;
	MPG = miles/gallons;
	cout << "MPG this trip: " << MPG << endl;
	totalMiles+=miles;
	totalGallons+=gallons;
	totalMPG = totalMiles/totalGallons;
	cout << "Total MPG: " << totalMPG << endl;
	}

	return 0;
}



