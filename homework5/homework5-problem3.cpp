/*
 * homework5-problem3.cpp
 *
 *  Created on: May 6, 2025
 *      Author: Joel Suh
 */


#include <iostream>
using namespace std;

int i,k,j;

int main(){

	for (i=0;i<5;i++){
		for (k=i;k<=5;k++){
			cout << " ";
		}
		for (j=1;j<i+2;j++){
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}



