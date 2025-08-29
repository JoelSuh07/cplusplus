/*
 * lab.cpp
 *
 *  Created on: Aug 26, 2025
 *      Author: Joel
 */
#include <iostream>
using namespace std;

class Car{
private:
	int yearModel;
	string make;
	int speed;

public:
	Car(int YearModel, string Make){
		cout << "Being called." << endl;
		yearModel = YearModel;
		make = Make;
		speed = 0;
	}

	void setYearModel(int yM){
		yearModel = yM;
	}
	int getYearModel(){
		return yearModel;
	}

	void setMake(string m){
		make = m;
	}
	string getMake(){
		return make;
	}

	void setSpeed(int s){
		speed =+ s;
	}
	int getSpeed(){
		return speed;
	}
/*
	void setTank(double t){
		tank =+ t;
	}
	double getTank(){
		return tank;
	}
*/
	void accelerate()
	{
		speed = speed + 5;
	}

	void brake(){
		speed = speed - 5;
	}

	void display()
	{
		cout << "Your " << yearModel << " " << make <<  "'s speed is " << speed << "." << endl;
	}
};

int main(int argc, const char * argv[]){

	Car car1(2009, "Toyota");


	car1.display();

	car1.accelerate();
	car1.display();
		car1.accelerate();
		car1.display();
			car1.accelerate();
			car1.display();
				car1.accelerate();
				car1.display();
					car1.accelerate();
					car1.display();

	car1.brake();
	car1.display();
		car1.brake();
		car1.display();
			car1.brake();
			car1.display();
				car1.brake();
				car1.display();
					car1.brake();
					car1.display();

	return 0;
}

