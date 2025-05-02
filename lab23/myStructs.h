/*
 * myStructs.h
 *
 *  Created on: Apr 29, 2025
 *      Author: Joel Suh
 */

#ifndef MYSTRUCTS_H_
#define MYSTRUCTS_H_
#include <string>
#include "myWrenches.h"
using namespace std;


struct Car {
	string engineType;
	int wheelNum;
	int windowNum;
};

struct Toolbox {
	int numWrenches;
	string size;
	int numDrawers;
	Wrench myWrench;
};

struct Garage {
	Car car;
	Toolbox toolbox;
	int numDrawers;
};



#endif /* MYSTRUCTS_H_ */
