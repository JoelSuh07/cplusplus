//============================================================================
// Name        : Lab23.cpp
// Author      : Joel Suh
//============================================================================

#include <iostream>
#include "myWrenches.h"
#include "myStructs.h"
#include "myFuncs.h"
using namespace std;


//Our toolbox
// - numWrenches: int
// - size: string  // e.g. "big", "small:
// - numDrawers: int


/*
 * prints the Garage info
 */

int main() {
	cout << "Lab 21 - Creating your own data type" << endl;

	Garage myGarage;
	getGarage( myGarage );
	pGarage( myGarage );

	Car myCar;
	getCar(myCar);
	pCar(myCar);

	Toolbox myToolbox;
	getToolbox(myToolbox);
	pToolbox(myToolbox);
	return 0;
}



/*
 *  int numWrenches;
 *  string size;
 *  int numDrawers;
 */




