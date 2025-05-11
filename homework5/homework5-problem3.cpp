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

	for (i=1;i<=5;i++){
		for (k=1;k<=5-i;k++){
			cout << " ";
		}
		for (j=1;j<=2*i-1;j++){
			cout << "*";
		}
		cout << endl;
	}
	for (i=4;i>0;i--){
		for (k=1;k<=5-i;k++){
			cout << " ";
		}
		for (j=1;j<=2*i-1;j++){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}



