/*
 * lab.cpp
 *
 *  Created on: Sep 11, 2025
 *      Author: Joel
 */
#include <iostream>
using namespace std;

class ComplexNum {
public:
	ComplexNum(double realNum = 0, double imaginaryNum= 0);
	ComplexNum operator+(ComplexNum rhs);
	ComplexNum operator-(ComplexNum rhs);
	ComplexNum operator*(ComplexNum rhs);
	ComplexNum operator<(ComplexNum rhs);

private:
	double real;
	double imaginary;
};

ComplexNum ComplexNum :: operator+(ComplexNum rhs){
	ComplexNum complexnumber;
	complexnumber.real = real + rhs.real;
	complexnumber.imaginary = imaginary + rhs.imaginary;

	return complexnumber;
}

ComplexNum ComplexNum :: operator-(ComplexNum rhs){
	ComplexNum complexnumber;
	complexnumber.real = real - rhs.real;
	complexnumber.imaginary = imaginary - rhs.imaginary;

	return complexnumber;
}

ComplexNum ComplexNum :: operator*(ComplexNum rhs){
	ComplexNum complexnumber;
	complexnumber.real = real * rhs.real;
	complexnumber.imaginary = imaginary * rhs.imaginary;

	return complexnumber;
}

bool operator<(const ComplexNum& lhs, const ComplexNum& rhs){
	return lhs < rhs;
}



