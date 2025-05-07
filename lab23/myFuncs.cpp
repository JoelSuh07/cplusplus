/*
 * myFuncs.cpp
 *
 *  Created on: Apr 29, 2025
 *      Author: Joel Suh
 */

#include <iostream>
#include "myStructs.h"
#include "myWrenches.h"
#include "myFuncs.h"

using namespace std;


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

void pToolbox( Toolbox const & myToolbox ){
	cout << "number of wrenches: " << myToolbox.numWrenches << endl;
	cout << "Size: " << myToolbox.size << endl;
	cout << "Number of drawers: " << myToolbox.numDrawers << endl;
	cout << "Kind of wrenches: " << wrenchToString[myToolbox.myWrench] << endl;
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
	cout << "What kind of wrench do you have?: ";
	string w;
	cin >> w;
	myToolbox.myWrench = stringToWrench(w);
	cin.get();
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

Wrench stringToWrench(const string & myWrench){
	if (myWrench == "CRESCENT"){
		return CRESCENT;
	} else if (myWrench == "PLUMBERS"){
		return PLUMBERS;
	} else if (myWrench == "BASIN"){
		return BASIN;
	} else if (myWrench == "PIPE"){
		return PIPE;
	} else if (myWrench == "OPEN_ENDED"){
		return OPEN_ENDED;
	} else if (myWrench == "DOG_BONE"){
		return DOG_BONE;
	} else if (myWrench == "CROWFOOT"){
		return CROWFOOT;
	} else if (myWrench == "LUG"){
		return LUG;
	} else if (myWrench == "FAN_CLUTCH"){
		return FAN_CLUTCH;
	} else if (myWrench == "STRIKING"){
		return STRIKING;
	} else {
		return THATS_NOT_A_WRENCH;
	}
}

