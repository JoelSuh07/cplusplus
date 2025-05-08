/*
 * myFuncs.h
 *
 *  Created on: May 1, 2025
 *      Author: student
 */

#ifndef MYFUNCS_H_
#define MYFUNCS_H_

void pGarage( Garage const & gar );
void getGarage( Garage & gar );
//Garage otherGetGarage();

void pCar( Car const & car );
void getCar( Car & car );

void pToolbox( Toolbox const & toolbox  );
void getToolbox( Toolbox & toolbox );

Wrench stringToWrench(const string & myWrench);




#endif /* MYFUNCS_H_ */
