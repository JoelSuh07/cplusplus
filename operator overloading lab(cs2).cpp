/*
 * lab.cpp
 *
 *  Created on: Sep 11, 2025
 *      Author: Joel
 */
#include <iostream>
#include <cmath>
using namespace std;

class ComplexNum {
public:
	ComplexNum(double realNum = 0, double imaginaryNum = 0);
	ComplexNum operator+(ComplexNum& rhs);
	ComplexNum operator-(ComplexNum& rhs);
	ComplexNum operator*(ComplexNum& rhs);
	double getMagnitude();
	bool operator>(ComplexNum& rhs);
	void print();

private:
	double real;
	double imaginary;
};


ComplexNum::ComplexNum(double realNum, double imaginaryNum){
	real = realNum;
	imaginary = imaginaryNum;
}


ComplexNum ComplexNum :: operator+(ComplexNum& rhs){
	this->real = real + rhs.real;
	this->imaginary = imaginary + rhs.imaginary;

	return ComplexNum(real,imaginary);
}

ComplexNum ComplexNum :: operator-(ComplexNum& rhs){
	//ComplexNum complexnumber;
	this->real = real - rhs.real;
	this->imaginary = imaginary - rhs.imaginary;

	return ComplexNum(real,imaginary);
}

ComplexNum ComplexNum :: operator*(ComplexNum& rhs){
	//ComplexNum complexnumber;
	double newReal = (real * rhs.real) - (imaginary * rhs.imaginary);
	double newImaginary = (imaginary * rhs.real) + (real * rhs.imaginary);

	return ComplexNum(newReal,newImaginary);
}

double ComplexNum :: getMagnitude(){
	return sqrt((this->real*real)+(this->imaginary*imaginary));
}

bool ComplexNum :: operator>(ComplexNum& rhs){
	return this->getMagnitude() > rhs.getMagnitude();
}

void ComplexNum :: print(){
	if (imaginary < 0) {
	        cout << real << imaginary << "i" << endl;
	    } else {
	    	cout << real << "+" << imaginary << "i" << endl;
	    	    }
	    	}

int main(){

	ComplexNum addR(3,2);
	ComplexNum addI(4,5);
	ComplexNum addC = addR + addI;
	addC.print();

	ComplexNum minR(3,2);
	ComplexNum minI(4,5);
	ComplexNum minC = minR - minI;
	minC.print();

	ComplexNum mul1(3,2);
	ComplexNum mul2(4,5);
	ComplexNum mulC = mul1 * mul2;
	mulC.print();

	ComplexNum mag1(3,2);
	ComplexNum mag2(4,5);
	mag1.getMagnitude();
	mag2.getMagnitude();

	cout << "Is Magnitude 1 larger than Magnitude 2?" << endl;
	cout << boolalpha << (mag1>mag2);
	return 0;
}

