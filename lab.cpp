/*
 * lab.cpp
 *
 *  Created on: Aug 26, 2025
 *      Author: student
 */
#include <iostream>
using namespace std;

class Car{
private:
	int speed;
	double tank;

public:
	Car(){
		cout << "Being called." << endl;
		speed = 0;
	}

	void setSpeed(int s){
		speed =+ s;
	}
	int getSpeed(){
		return speed;
	}

	void setTank(double t){
		tank =+ t;
	}
	double getTank(){
		return tank;
	}

	void accelerate()
	{
		speed = speed + 5;
	}

	void display()
	{
		cout << "Speed = " << speed << endl;
	}
};

int main(int argc, const char * argv[]){

	Car car1;

	//car1.speed = 100;
	car1.display();
	car1.accelerate();
	car1.display();

	return 0;
}


