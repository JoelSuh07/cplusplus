/*
 * ProductionWorker.cpp
 *
 *  Created on: Sep 30, 2025
 *      Author:
 */
#include "Employee.cpp"

#include <iostream>
using namespace std;


class productionworker: public employee{
public:
	productionworker();
	int getShift();
	void setShift();
	double getHourlyPay();
	void setHourlyPay();

private:
	int shift;
	double hourlyPay;
};

