//============================================================================
// Name        : Lab22.cpp
// Author      : Joel Suh
//============================================================================

#include <iostream>
#include "myWrenches.h"
using namespace std;

struct Car {
	string engineType;
	int wheelNum;
	int windowNum;
};

//Our toolbox
// - numWrenches: int
// - size: string  // e.g. "big", "small:
// - numDrawers: int
struct Toolbox {
	int numWrenches;
	string size;
	int numDrawers;
};

struct Garage {
	Car car;
	Toolbox toolbox;
	int numDrawers;
};

/*
 * prints the Garage info
 */

void pGarage( Garage const & gar );
void getGarage( Garage & gar );
//Garage otherGetGarage();

void pCar( Car const & myCar );
void getCar( Car & car );

void pToolbox( Toolbox const & myToolbox  );
void getToolbox( Toolbox & myToolbox );

int main() {
	cout << "Lab 21 - Creating your own data type" << endl;

	Garage myGarage;
	getGarage( myGarage );
	pGarage( myGarage );
	return 0;
}

void pGarage( Garage const & gar ){
	pCar( gar.car );
	pToolbox(gar.toolbox);
	cout << gar.numDrawers;
	cout << endl;
}

void getGarage( Garage & gar ){
	getCar( gar.car );
	getToolbox( gar.toolbox );
	cout << "How many drawers in the garage?: ";
	cin >> gar.numDrawers;
	cin.get(); // trash the enter left in cin
}

void getCar( Car & myCar2 ){
	// ask for input (i.e. prompt the user)
	cout << "What is your engine type?: ";
	getline(cin,myCar2.engineType);
	cout << "How many wheels are on your car?: ";
	cin >> myCar2.wheelNum;
	cin.get(); // throw away the <ENTER> left in cin
	cout << "How many windows are on your car?: ";
	cin >> myCar2.windowNum;
	cin.get();
}

void pCar( Car const & myCar ){
	cout << "Engine type: " <<   myCar.engineType << endl;
	cout << "Wheel number: " << myCar.wheelNum << endl;
	cout << "Window number: " << myCar.windowNum << endl;
}

/*
 *  int numWrenches;
 *  string size;
 *  int numDrawers;
 */

void pToolbox( Toolbox const & myToolbox ){
	cout << "number of wrenches: " << myToolbox.numWrenches << endl;
	cout << "Size: " << myToolbox.size << endl;
	cout << "Number of drawers: " << myToolbox.numDrawers << endl;
}

void getToolbox( Toolbox & myToolbox ){
	cout << "How many wrenches are in your toolbox?: ";
	cin >> myToolbox.numWrenches;
	cin.get();
	cout << "What is your toolbox size?: ";
	getline(cin,myToolbox.size);
	cout << "How many drawers are in your toolbox?: ";
	cin >> myToolbox.numDrawers;
	cin.get();
}


